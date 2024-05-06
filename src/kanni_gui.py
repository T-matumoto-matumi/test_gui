from PyQt5 import QtWidgets
from PyQt5 import QtCore
from PyQt5 import QtGui

import sys
import os

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge,CvBridgeError
from std_msgs.msg import String,Bool
from gakurobo_msgs.msg import Emergency

from kanni import *

class Myform(QtWidgets.QMainWindow):
    def __init__(self,parent=None):
        super(Myform, self).__init__(parent)
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        #今ステージが赤falseなのか青Trueなのか記録する変数
        self.stage_now=True
        #cvのbridge
        self.br =CvBridge()
        # プッシュボタンに関数をバインド
        self.ui.emergency.clicked.connect(self.emergency_cb)
        self.ui.retry.clicked.connect(self.retry_cb)
        self.ui.stage_change.clicked.connect(self.stage_change)

        # ノードの初期化
        rclpy.init(args=None)
        self.node = Node("kanni_gui_node")
        
        # QtTimerのインスタンスを生成してros_spin関数をバインド
        self.timer = QtCore.QTimer()
        self.timer.timeout.connect(self.ros_spin)
        
        # 処理周期の設定
        self.update_period = 10
        self.timer.start(self.update_period)
    
        
        
        #ロボットのconditionを表示
        self.condition_sub = self.node.create_subscription(
            String,"/kiki/condition",self.condition_cb,10
        ) 
        
        #cameraのimageのsub
        self.search_image_sub=self.node.create_subscription(
            Image,"kiki/annotated_image",self.search_image_cb,10
        )
        
        #cameraのimageのsub
        self.image_sub=self.node.create_subscription(
            Image,"kiki/contents",self.contents_image_cb,10
        )
    
        #緊急停止のpub
        self.emergency_pub = self.node.create_publisher(
            Emergency,"/kiki/emergency",10
        )
        self.emergency =Emergency()
        self.emergency.emergency = False
        #retryのpub true:retry ,　false:not retry 
        self.retry_pub = self.node.create_publisher(
            Bool,"kiki/retry",10
        )
        self.retry = Bool()
        self.retry.data = False
        
        
        #今どちらのステージであるのかをpub
        #false：赤　true:青
        self.change_stage_pub=self.node.create_publisher(
            Bool,'kiki/change_stage',10
        )
        self.stage_msg = Bool()
        
    def condition_cb(self,msg):
        self.ui.condition.setText(msg.data)

    def retry_cb(self):
        current_color = self.ui.retry.palette().color(self.ui.emergency.backgroundRole())
        
        # 色が赤の場合は元の色に戻し、それ以外の場合は青に変更
        if current_color ==QtGui.QColor('blue'):
            self.ui.retry.setStyleSheet(f"background-color: rgb(114, 159, 207);")
            self.retry.data = False
            self.retry_pub.publish(self.retry)
        else:
            self.ui.retry.setStyleSheet("background-color: blue;")
            self.retry.data=True
            self.retry_pub.publish(self.retry)
    

            
    
    def stage_change(self):
        if self.stage_now is True:
            #赤のstageに変更する
            #false：赤　true:青
            self.stage_now=False
            self.stage_msg.data=self.stage_now
            self.change_stage_pub.publish(self.stage_msg)
            self.ui.stage_change.setText('赤ステージ')
            self.ui.stage_change.setStyleSheet("background-color: red;")
        else:
            #青のstageに変更する
            self.stage_now=True
            self.stage_msg.data=self.stage_now
            self.change_stage_pub.publish(self.stage_msg)
            self.ui.stage_change.setText('青ステージ')
            self.ui.stage_change.setStyleSheet("background-color: blue;")   
            
    def emergency_cb(self):
        current_color = self.ui.emergency.palette().color(self.ui.emergency.backgroundRole())
        # 色が赤の場合は元の色に戻し、それ以外の場合は赤に変更
        if current_color ==QtGui.QColor('red'):
            self.ui.emergency.setStyleSheet(f"background-color: rgb(239, 125, 125);")
            self.emergency.emergency=False
            self.emergency_pub.publish(self.emergency)
        else:
            self.ui.emergency.setStyleSheet("background-color: red;")
            self.emergency.emergency=True
            self.emergency_pub.publish(self.emergency)
    
    def search_image_cb(self,msg):
        try:
            cv_br_img=self.br.imgmsg_to_cv2(msg,"bgr8")
        except CvBridgeError as e:
            print(e)
        # BGRをRGBに変換
        rgb_img = cv2.cvtColor(cv_br_img,cv2.COLOR_BGR2RGB)
        #QImageに変換
        height, width, channel = rgb_img.shape
        bytes_per_line = 3 * width
        q_image = QtGui.QImage(rgb_img.data, width, height, bytes_per_line, QtGui.QImage.Format_RGB888)
        pixmap = QtGui.QPixmap.fromImage(q_image)
        self.ui.search_image.setPixmap(pixmap)
        
    def contents_image_cb(self,msg):
        try:
            cv_br_img=self.br.imgmsg_to_cv2(msg,"bgr8")
        except CvBridgeError as e:
            print(e)
        # BGRをRGBに変換
        rgb_img = cv2.cvtColor(cv_br_img,cv2.COLOR_BGR2RGB)
        #QImageに変換
        height, width, channel = rgb_img.shape
        bytes_per_line = 3 * width
        q_image = QtGui.QImage(rgb_img.data, width, height, bytes_per_line, QtGui.QImage.Format_RGB888)
        pixmap = QtGui.QPixmap.fromImage(q_image)
        self.ui.sairo_image.setPixmap(pixmap)
            
    def ros_spin(self):
        rclpy.spin_once(self.node,timeout_sec=0.01)
        self.show()
        self.timer.start(self.update_period)
        
def main(args=None):
    app = QtWidgets.QApplication(sys.argv)
    win = Myform()
    win.show()
    sys.exit(app.exec_())
    

if __name__ == '__main__':
    main()