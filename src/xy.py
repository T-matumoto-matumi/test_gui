import sys
from PyQt5.QtWidgets import QApplication, QGraphicsScene, QGraphicsView, QGraphicsPathItem, QMainWindow, QVBoxLayout, QWidget, QSlider
from PyQt5.QtGui import QBrush, QPen, QPainterPath
from PyQt5.QtCore import Qt, QPointF

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

class ArrowExample(QMainWindow):
    def __init__(self):
        super(ArrowExample, self).__init__()

        self.central_widget = QWidget(self)
        self.setCentralWidget(self.central_widget)

        # QGraphicsViewとQGraphicsSceneの作成
        self.view = QGraphicsView()
        self.scene = QGraphicsScene()
        self.view.setScene(self.scene)

        self.central_layout = QVBoxLayout(self.central_widget)
        self.central_layout.addWidget(self.view)

        # 指定した位置に矢印の描画
        self.arrow_x = 50  # x座標の初期値
        self.arrow_y = 50  # y座標の初期値
        self.arrow_angle = 0  # 角度の初期値
        self.arrow_item = ArrowItem(self.arrow_x, self.arrow_y, self.arrow_angle)
        self.scene.addItem(self.arrow_item)

        # スライダーの作成
        self.slider_x = QSlider(Qt.Horizontal)
        self.slider_x.setMinimum(0)
        self.slider_x.setMaximum(200)
        self.slider_x.setValue(self.arrow_x)
        self.slider_x.valueChanged.connect(self.update_arrow_position_x)
        self.central_layout.addWidget(self.slider_x)

        self.slider_y = QSlider(Qt.Horizontal)
        self.slider_y.setMinimum(0)
        self.slider_y.setMaximum(200)
        self.slider_y.setValue(self.arrow_y)
        self.slider_y.valueChanged.connect(self.update_arrow_position_y)
        self.central_layout.addWidget(self.slider_y)

        self.slider_angle = QSlider(Qt.Horizontal)
        self.slider_angle.setMinimum(0)
        self.slider_angle.setMaximum(360)
        self.slider_angle.setValue(self.arrow_angle)
        self.slider_angle.valueChanged.connect(self.update_arrow_rotation)
        self.central_layout.addWidget(self.slider_angle)

    def update_arrow_position_x(self, value):
        self.arrow_x = value
        self.arrow_item.setPos(self.arrow_x, self.arrow_y)

    def update_arrow_position_y(self, value):
        self.arrow_y = value
        self.arrow_item.setPos(self.arrow_x, self.arrow_y)

    def update_arrow_rotation(self, value):
        self.arrow_angle = value
        self.arrow_item.setRotation(-self.arrow_angle)

def main():
    app = QApplication(sys.argv)
    window = ArrowExample()
    window.setGeometry(100, 100, 400, 300)
    window.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
