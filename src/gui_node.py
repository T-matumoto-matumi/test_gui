from PyQt5 import QtWidgets
from PyQt5 import QtCore
from PyQt5 import QtGui

import sys
import os

# sys.path.append("/home/akki/qt_ws/src/qt_sample/qt_sample/ui")
# from sample_ui2 import Ui_MainWindow

import time
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSDurabilityPolicy, QoSReliabilityPolicy, QoSHistoryPolicy, QoSPresetProfiles, QoSProfile
from gakurobo import *
from gakurobo_msgs.msg import Setpower,Pid,Emergency,Aims,InSairo,KikiUdp,Odom
from sensor_msgs.msg import Image
import numpy as np
import cv2
from cv_bridge import CvBridge,CvBridgeError
from PyQt5.QtWidgets import QApplication, QGraphicsScene, QGraphicsView, QGraphicsPathItem, QMainWindow, QVBoxLayout, QWidget, QSlider,QGraphicsRectItem,QGraphicsLineItem,QGraphicsEllipseItem
from PyQt5.QtGui import QBrush, QPen, QPainterPath,QColor
from PyQt5.QtCore import Qt, QPointF
from nav_msgs.msg import Odometry
from tf_transformations import euler_from_quaternion
import math
from scipy.interpolate import interp1d
from std_msgs.msg import String,Bool

class ArrowItem(QGraphicsPathItem):
    def __init__(self, x, y, angle):
        super(ArrowItem, self).__init__()

        # 矢印の形状を定義
        arrow_path = QPainterPath()

        # 矢印の頭部分
        arrow_path.moveTo(-5, -5)
        arrow_path.lineTo(0, 0)
        arrow_path.lineTo(-5, 5)

        # 矢印の棒の部分
        arrow_path.moveTo(0, 0)
        arrow_path.lineTo(40, 0)  # 矢印の棒の長さ

        self.setPath(arrow_path)

        self.setPos(x, y)  # 矢印の位置を設定
        self.setRotation(-angle)  # 角度を設定（反時計回りが正）
        self.setBrush(QBrush(Qt.blue))
        self.setPen(QPen(Qt.blue, 4))  # 線の太さを設定
        
class Myform(QtWidgets.QMainWindow):
    def __init__(self,parent=None):
        super(Myform, self).__init__(parent)
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.scene = QGraphicsScene()
        self.ui.map.setScene(self.scene)
        #緑の矢印用のかくど
        self.aim_arg=90
        #今ステージが赤falseなのか青Trueなのか記録する変数
        self.stage_now=True
        
        # 指定した位置に矢印の描画
        self.arrow_x = 371.67  # x座標の初期値
        self.arrow_y = 780  # y座標の初期値
        self.arrow_angle = 0  # 角度の初期値
        self.arrow_item = ArrowItem(self.arrow_x, self.arrow_y, self.arrow_angle)
        self.green_arrow_item = ArrowItem(self.arrow_x,self.arrow_y,self.aim_arg)
        self.green_arrow_item.setBrush(QBrush(Qt.green))
        self.green_arrow_item.setPen(QPen(Qt.green,4))
        self.scene.addItem(self.green_arrow_item)
        self.scene.addItem(self.arrow_item)
        self.arrow_item.setPos(self.arrow_x,self.arrow_y)
        self.green_arrow_item.setPos(self.arrow_x,self.arrow_y)
        
        #水田エリア
        self.paddy_item =QGraphicsRectItem(0,0,253.33,66.67)
        self.paddy_item.setPos(155,270)
        self.paddy_item.setBrush(QColor(0,255,255))
        self.scene.addItem(self.paddy_item)
        
        #一番外側の四角
        self.big_squere_item=QGraphicsRectItem(0,0,411.67,806.67)
        self.big_squere_item.setPos(0,0)
        self.big_squere_item.setPen(Qt.blue)
        self.scene.addItem(self.big_squere_item)
        
        #サイロのところを分ける線（青）
        self.line_1_b = QGraphicsLineItem(16.67,0,16.67,806.67)
        self.line_1_b.setPen(Qt.blue)
        self.scene.addItem(self.line_1_b)
        
        #エリア１とエリア２を分ける線（青）
        self.line_2_b =QGraphicsLineItem(16.67,536.67,411.67,536.67)
        self.line_2_b.setPen(Qt.blue)
        self.scene.addItem(self.line_2_b)
        
        #エリア２とエリア３を分ける線（青）
        self.line_3_b = QGraphicsLineItem(16.67,270,411.67,270)
        self.line_3_b.setPen(Qt.blue)
        self.scene.addItem(self.line_3_b)
        
        #サイロのところを分ける線（赤）
        self.line_1_r = QGraphicsLineItem(395,0,395,806.67)
        self.line_1_r.setPen(Qt.red)
        
        #エリア１とエリア２を分ける線（赤）
        self.line_2_r =QGraphicsLineItem(3.33,536.67,395,536.67)
        self.line_2_r.setPen(Qt.red)
        
        #エリア２とエリア３を分ける線（赤）
        self.line_3_r = QGraphicsLineItem(3.33,270,395,270)
        self.line_3_r.setPen(Qt.red)
        
        #スタート地点
        self.start_pos_item = QGraphicsRectItem(0,0,46.67,46.67)
        self.start_pos_item.setPos(348.33,756.67)
        self.scene.addItem(self.start_pos_item)
        
        #１つ目の坂
        self.slope_1_item=QGraphicsRectItem(0,0,66.67,66.67)
        self.slope_1_item.setPos(341.67,536.67)
        self.scene.addItem(self.slope_1_item)
        
        #一番上のサイロ
        self.sairo_1 = QGraphicsEllipseItem(0,0,16.67,16.67)
        self.sairo_1.setPos(0,28.33)
        self.scene.addItem(self.sairo_1)
        
        #上から二番目のサイロ
        self.sairo_2 = QGraphicsEllipseItem(0,0,16.67,16.67)
        self.sairo_2.setPos(0,76.67)
        self.scene.addItem(self.sairo_2)
        
        #上から三番目のサイロ
        self.sairo_3 = QGraphicsEllipseItem(0,0,16.67,16.67)
        self.sairo_3.setPos(0,126.67)
        self.scene.addItem(self.sairo_3)
        
        #上から四番目のサイロ
        self.sairo_4 = QGraphicsEllipseItem(0,0,16.67,16.67)
        self.sairo_4.setPos(0,176.67)
        self.scene.addItem(self.sairo_4)
        
        #上から五番目のサイロ
        self.sairo_5 = QGraphicsEllipseItem(0,0,16.67,16.67)
        self.sairo_5.setPos(0,226.67)
        self.scene.addItem(self.sairo_5)
        
        #map用座標
        self.x_map=0.0
        self.y_map=0.0
        self.yaw_map=0.0
        self.x_path_b =[0, 0, 0, 0, 0, 0 , -3.800,-3.800,-3.800,-3.800]
        self.y_path_b =[0, 0.985, 2.650,3.650 , 5.150,6.070, 6.070, 6.650,7.650,9.650]
        
        self.x_path_r =[0, 0, 0, 0, 0, 0 , 3.800,3.800,3.800,3.800]
        self.y_path_r =[0, 0.985, 2.650,3.650 , 5.150,6.070, 6.070, 6.650,7.650,9.650]
        
        self.x_path_scale_down=self.scale_down_x(self.x_path_b)
        self.y_path_scale_down=self.scale_down_y(self.y_path_b)
        
        
        # QtTimerのインスタンスを生成してros_spin関数をバインド
        self.timer = QtCore.QTimer()
        self.timer.timeout.connect(self.ros_spin)
        
        #cvのbridge
        self.br =CvBridge()

        # 処理周期の設定
        self.update_period = 10
        self.timer.start(self.update_period)
        
        #timerの設定
        self.timer_time = QtCore.QTimer(self)
        self.ui.timer_button.clicked.connect(self.toggle_timer)
        self.timer_time.timeout.connect(self.update_timer)
        self.is_timer_running = False
        
        
        # プッシュボタンに関数をバインド
        self.ui.emergency.clicked.connect(self.emergency_cb)
        
        #ステージを変更するボタン
        self.ui.change_stage.clicked.connect(self.stage_change_cb)
        self.ui.change_stage.setStyleSheet("background-color: blue;")
        
        #movecheckのボタン
        self.ui.move_check.clicked.connect(self.move_check_cb)
        self.move_check_case=0
        
        #ClearPathのボタン
        self.ui.clear_path.clicked.connect(self.clear_path_cb)
        self.plot_path_list=[]
        
        # ボタンの初期の背景色を保存する変数
        self.original_color = self.ui.emergency.palette().color(self.ui.emergency.backgroundRole())
        
        #スライダーの関数をバインド
        self.ui.kp.valueChanged.connect(self.kp_change_cb)
        self.ui.ki.valueChanged.connect(self.ki_change_cb)
        self.ui.kd.valueChanged.connect(self.kd_change_cb)
        
        # ノードの初期化
        rclpy.init(args=None)
        self.node = Node("gui_node")
        
        pos = QoSProfile(
            depth=10,
            reliability=QoSReliabilityPolicy.RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,
        )
        
        #緑の矢印実装
        self.arrow_green_sub = self.node.create_subscription(
            Aims,"kiki/aims",self.green_cb,10
        )
        
        #ロボットのconditionを表示
        self.condition_sub = self.node.create_subscription(
            String,"/condition",self.condition_cb,10
        )        
        #t265の座標sub
        self.t265_sub=self.node.create_subscription(
            Odom,"odom",self.odom_callback,10
        )
        
        #cameraのimageのsub
        self.image_sub=self.node.create_subscription(
            Image,"kiki/annotated_image",self.image_cb,10
        )
        
        #pidの定数をpub
        self.pid_pub =self.node.create_publisher(
            Pid,"kiki/pid_const",10
        )
        self.pids=Pid()
        self.kp=0.3
        self.ki=0.02
        self.kd=0.01
        
        #setpowerをsub
        self.setpower_sub = self.node.create_subscription(
            KikiUdp,"/kiki/setpower",self.setpower_cb,10
        )
        self.setpower=Setpower()
        
        #setpowerをpub
        self.setpower_pub = self.node.create_publisher(
            KikiUdp,"kiki/setpower",10
        )
        
        #緊急停止のpub
        self.emergency_pub = self.node.create_publisher(
            Emergency,"/kiki/emergency",10
        )
        self.emergency = Emergency()
        self.emergency.emergency=False
        
        #サイロな中身のsub
        self.insairo_sub=self.node.create_subscription(
            InSairo,'/kiki/insairo',self.insairo_cb,10
        )

        #今どちらのステージであるのかをpub
        #false：赤　true:青
        self.change_stage_pub=self.node.create_publisher(
            Bool,'change_stage',10
        )
        self.stage_msg = Bool()
        
    def insairo_cb(self,msg):
        self.change_sairo_1_show(msg.sairo1)
        self.change_sairo_2_show(msg.sairo2)
        self.change_sairo_3_show(msg.sairo3)
        self.change_sairo_4_show(msg.sairo4)
        self.change_sairo_5_show(msg.sairo5)
        
    def change_sairo_1_show(self,sairo):
        if sairo[0]==0:
            self.ui.sairo_1_down.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[0]==1:
            self.ui.sairo_1_down.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_1_down.setPixmap(QtGui.QPixmap("nothing.jpg"))
            
        if sairo[1]==0:
            self.ui.sairo_1_cen.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[1]==1:
            self.ui.sairo_1_cen.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_1_cen.setPixmap(QtGui.QPixmap("nothing.jpg"))

        if sairo[2]==0:
            self.ui.sairo_1_up.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[2]==1:
            self.ui.sairo_1_up.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_1_up.setPixmap(QtGui.QPixmap("nothing.jpg"))
    
    def change_sairo_2_show(self,sairo):
        if sairo[0]==0:
            self.ui.sairo_2_down.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[0]==1:
            self.ui.sairo_2_down.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_2_down.setPixmap(QtGui.QPixmap("nothing.jpg"))
            
        if sairo[1]==0:
            self.ui.sairo_2_cen.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[1]==1:
            self.ui.sairo_2_cen.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_2_cen.setPixmap(QtGui.QPixmap("nothing.jpg"))

        if sairo[2]==0:
            self.ui.sairo_2_up.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[2]==1:
            self.ui.sairo_2_up.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_2_up.setPixmap(QtGui.QPixmap("nothing.jpg"))
    
    def change_sairo_3_show(self,sairo):
        if sairo[0]==0:
            self.ui.sairo_3_down.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[0]==1:
            self.ui.sairo_3_down.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_3_down.setPixmap(QtGui.QPixmap("nothing.jpg"))
            
        if sairo[1]==0:
            self.ui.sairo_3_cen.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[1]==1:
            self.ui.sairo_3_cen.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_3_cen.setPixmap(QtGui.QPixmap("nothing.jpg"))

        if sairo[2]==0:
            self.ui.sairo_3_up.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[2]==1:
            self.ui.sairo_3_up.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_3_up.setPixmap(QtGui.QPixmap("nothing.jpg"))
        
    def change_sairo_4_show(self,sairo):
        if sairo[0]==0:
            self.ui.sairo_4_down.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[0]==1:
            self.ui.sairo_4_down.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_4_down.setPixmap(QtGui.QPixmap("nothing.jpg"))
            
        if sairo[1]==0:
            self.ui.sairo_4_cen.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[1]==1:
            self.ui.sairo_4_cen.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_4_cen.setPixmap(QtGui.QPixmap("nothing.jpg"))

        if sairo[2]==0:
            self.ui.sairo_4_up.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[2]==1:
            self.ui.sairo_4_up.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_4_up.setPixmap(QtGui.QPixmap("nothing.jpg"))
    
    def change_sairo_5_show(self,sairo):
        if sairo[0]==0:
            self.ui.sairo_5_down.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[0]==1:
            self.ui.sairo_5_down.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_5_down.setPixmap(QtGui.QPixmap("nothing.jpg"))
            
        if sairo[1]==0:
            self.ui.sairo_5_cen.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[1]==1:
            self.ui.sairo_5_cen.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_5_cen.setPixmap(QtGui.QPixmap("nothing.jpg"))

        if sairo[2]==0:
            self.ui.sairo_5_up.setPixmap(QtGui.QPixmap("blue.jpg"))
        elif sairo[2]==1:
            self.ui.sairo_5_up.setPixmap(QtGui.QPixmap("red.jpg"))
        else:
            self.ui.sairo_5_up.setPixmap(QtGui.QPixmap("nothing.jpg"))
    
    def condition_cb(self,msg):
        self.ui.condition.setText(msg.data)
    
    def plot(self):
        # グラフの描画
        for i in range(len(self.x_path_scale_down) - 1):
            line = QGraphicsLineItem(self.x_path_scale_down[i], self.y_path_scale_down[i], self.x_path_scale_down[i+1], self.y_path_scale_down[i+1])  # y軸を上向きにするために負の値を使用
            # QPenを使用して線の太さを設定
            pen = QPen()
            pen.setWidth(3)  # 線の太さを設定 (ピクセル単位)
            pen.setColor(QColor(255, 165, 0))  # 線の色を設定
            line.setPen(pen)
            
            self.scene.addItem(line)
            self.plot_path_list.append(line)  # アイテムをリストに追加

    def scale_down_x(self,path):
        ans = []
        if self.stage_now is True:
            for i in path:
                scale_down = i * 100 * (2 / 3)+371.67
                ans.append(scale_down)
            return ans
        else:
            for i in path:
                scale_down = i * 100 * (2 / 3)+36.67
                ans.append(scale_down)
            return ans

    def scale_down_y(self,path):
        ans = []
        if self.stage_now is True:
            for i in path:
                scale_down = -i * 100 * (2 / 3)+780
                ans.append(scale_down)
            return ans
        else:
            for i in path:
                scale_down = -i * 100 * (2 / 3)+780
                ans.append(scale_down)
            return ans
            
    
    def clear_path_cb(self):
        for line in self.plot_path_list:
            self.scene.removeItem(line)
        self.plot_path_list=[]
        #ここでplotしているのは仮

    
    def move_check_cb(self):
        if self.move_check_case ==0:
            self.change_power(w1=0.30,w2=0.0,w3=0.0,w4=0.0)
            self.move_check_case+=1
        elif self.move_check_case ==1:
            self.change_power(w1=-0.30,w2=0.0,w3=0.0,w4=0.0)
            self.move_check_case+=1
        elif self.move_check_case ==2:
            self.change_power(w1=0.0,w2=0.30,w3=0.0,w4=0.0)
            self.move_check_case+=1
        elif self.move_check_case==3:
            self.change_power(w1=0.0,w2=-0.30,w3=0.0,w4=0.0)
            self.move_check_case+=1
        elif self.move_check_case==4:
            self.change_power(w1=0.0,w2=0.0,w3=0.30,w4=0.0)
            self.move_check_case+=1
        elif self.move_check_case==5:
            self.change_power(w1=0.0,w2=0.0,w3=-0.30,w4=0.0)
            self.move_check_case+=1
        elif self.move_check_case==6:
            self.change_power(w1=0.0,w2=0.0,w3=0.0,w4=0.30)
            self.move_check_case+=1
        elif self.move_check_case==7:
            self.change_power(w1=0.0,w2=0.0,w3=0.0,w4=-0.30)
            self.move_check_case+=1
        else:
            self.change_power(w1=0.0,w2=0.0,w3=0.0,w4=0.0)   
            self.move_check_case=0           
    
    def change_power(self,w1,w2,w3,w4):
        msg =Setpower()
        msg.w1=w1
        msg.w2=w2
        msg.w3=w3
        msg.w4=w4
        self.setpower_pub.publish(msg)

    def toggle_timer(self):
        if self.is_timer_running:
            self.timer_time.stop()
            self.ui.timer_button.setText('タイマーリセット')
        else:
            self.remaining_time = 180  # 3分を秒で表したもの
            self.timer_time.start(1000)  # 1秒ごとに更新
            self.ui.timer_button.setText('タイマーストップ')

        self.is_timer_running = not self.is_timer_running
        
    def update_timer(self):
        self.remaining_time -= 1
        minutes = self.remaining_time // 60
        seconds = self.remaining_time % 60
        self.ui.timer.setText(f'残り時間: {minutes:02d}:{seconds:02d}')

        progress_value = int((self.remaining_time / 180) * 100)
        self.ui.timebar.setValue(progress_value)

        if self.remaining_time <= 0:
            self.timer.stop()
            self.ui.timer.setText('時間切れです！')
            self.is_timer_running = False
            self.ui.timer_button.setText('タイマーリセット')
    
    def stage_change_cb(self):
        if self.stage_now is True:
            #赤のstageに変更する
            #false：赤　true:青
            self.scene.removeItem(self.line_1_b)
            self.scene.removeItem(self.line_2_b)
            self.scene.removeItem(self.line_3_b)
            self.paddy_item.setPos(3.33,270)
            self.slope_1_item.setPos(3.33,536.67)
            self.start_pos_item.setPos(13.33,756.67)
            self.sairo_1.setPos(395,28.33)
            self.sairo_2.setPos(395,78.33)
            self.sairo_3.setPos(395,128.33)
            self.sairo_4.setPos(395,178.33)
            self.sairo_5.setPos(395,228.33)
            self.scene.addItem(self.line_1_r)
            self.scene.addItem(self.line_2_r)
            self.scene.addItem(self.line_3_r)
            self.arrow_item.setPos(36.67,780)
            self.green_arrow_item.setPos(36.67,780)
            self.big_squere_item.setPen(Qt.red)
            self.stage_now=False
            self.stage_msg.data=self.stage_now
            self.change_stage_pub.publish(self.stage_msg)
            self.x_path_scale_down=self.scale_down_x(self.x_path_r)
            self.y_path_scale_down=self.scale_down_y(self.y_path_r)
            self.clear_path_cb()
            self.plot()
            self.ui.change_stage.setStyleSheet("background-color: red;")
        else:
            #青のstageに変更する
            self.scene.removeItem(self.line_1_r)
            self.scene.removeItem(self.line_2_r)
            self.scene.removeItem(self.line_3_r)
            self.paddy_item.setPos(155,270)
            self.slope_1_item.setPos(341.67,536.67)
            self.start_pos_item.setPos(348.33,756.67)
            self.sairo_1.setPos(0,28.33)
            self.sairo_2.setPos(0,76.67)
            self.sairo_3.setPos(0,126.67)
            self.sairo_4.setPos(0,176.67)
            self.sairo_5.setPos(0,226.67)
            self.scene.addItem(self.line_1_b)
            self.scene.addItem(self.line_2_b)
            self.scene.addItem(self.line_3_b)
            self.arrow_item.setPos(self.arrow_x,self.arrow_y)
            self.green_arrow_item.setPos(self.arrow_x,self.arrow_y)
            self.big_squere_item.setPen(Qt.blue)
            self.stage_now=True
            self.stage_msg.data=self.stage_now
            self.change_stage_pub.publish(self.stage_msg)
            self.x_path_scale_down=self.scale_down_x(self.x_path_b)
            self.y_path_scale_down=self.scale_down_y(self.y_path_b)
            self.clear_path_cb()
            self.plot()
            self.ui.change_stage.setStyleSheet("background-color: blue;")
            
    def green_cb(self,msg):
        self.aim_arg = msg.aim_arg_parallel  

    
    def odom_callback(self,msg):
        self.x_map,self.y_map,self.yaw_map=self.get_pose(msg)
        if self.stage_now is True:
            self.arrow_item.setPos(self.x_map*100*(2/3)+371.67,-self.y_map*100*(2/3)+780)
            self.green_arrow_item.setPos(self.x_map*100*(2/3)+371.67,-self.y_map*100*(2/3)+780)
        else:
            self.arrow_item.setPos(self.x_map*100*(2/3)+36.67,-self.y_map*100*(2/3)+780)
            self.green_arrow_item.setPos(self.x_map*100*(2/3)+36.67,-self.y_map*100*(2/3)+780)
        deg = 180*(self.yaw_map/math.pi)
        green_deg = 180*(self.aim_arg/math.pi)
        self.arrow_item.setRotation(-deg)
        self.green_arrow_item.setRotation(-green_deg)
        
    
    def get_pose(self,msg):
        x = msg.x
        y = msg.y
        yaw = msg.yaw
        return x,y,yaw 
    
    def image_cb(self,msg):
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
        self.ui.image1.setPixmap(pixmap)
    
    def kp_change_cb(self):
        value = self.ui.kp.value()/100.0# スライダーの値を0から1に変換
        self.ui.kp_label.setText(f'Kp : {value}')
        self.kp=value
        self.update_pid()
        self.pid_pub.publish(self.pids)
           
    def ki_change_cb(self):
        value = self.ui.ki.value()/100.0# スライダーの値を0から1に変換
        self.ui.ki_label.setText(f'Ki : {value}')    
        self.ki=value
        self.update_pid()
        self.pid_pub.publish(self.pids)
        
    def kd_change_cb(self):
        value = self.ui.kd.value()/100.0# スライダーの値を0から1に変換
        self.ui.kd_label.setText(f'Kd : {value}')
        self.kd=value
        self.update_pid()
        self.pid_pub.publish(self.pids)
        
    def update_pid(self):
        self.pids.kp=self.kp
        self.pids.ki=self.ki
        self.pids.kd=self.kd
        
    def emergency_cb(self):
        current_color = self.ui.emergency.palette().color(self.ui.emergency.backgroundRole())
        
        # 色が赤の場合は元の色に戻し、それ以外の場合は赤に変更
        if current_color ==QtGui.QColor('red'):
            self.ui.emergency.setStyleSheet(f"background-color: {self.original_color.name()};")
            self.emergency.emergency=False
            self.emergency_pub.publish(self.emergency)
        else:
            self.ui.emergency.setStyleSheet("background-color: red;")
            self.emergency.emergency=True
            self.emergency_pub.publish(self.emergency)
        
    def setpower_cb(self,msg):
        self.setpower=msg
        self.ui.setpower_w1.setText(f'{self.setpower.w1}')
        self.ui.setpower_w2.setText(f'{self.setpower.w2}')
        self.ui.setpower_w3.setText(f'{self.setpower.w3}')
        self.ui.setpower_w4.setText(f'{self.setpower.w4}')
        
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