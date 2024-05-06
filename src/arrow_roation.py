import sys
from PyQt5.QtWidgets import QApplication, QGraphicsScene, QGraphicsView, QGraphicsPathItem, QMainWindow, QVBoxLayout, QWidget, QSlider
from PyQt5.QtGui import QBrush, QPen, QPainterPath
from PyQt5.QtCore import Qt, QPointF

class ArrowItem(QGraphicsPathItem):
    def __init__(self, angle):
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

        self.setPos(50, 50)  # 矢印の位置を設定
        self.setRotation(-angle)  # 指定した角度に向ける（反時計回りが正）
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

        # 指定した角度に向けた逆向きの矢印の描画
        self.arrow_angle = 0  # 初期値として90度に指定
        self.arrow_item = ArrowItem(self.arrow_angle)
        self.scene.addItem(self.arrow_item)

        # スライダーの作成
        self.slider = QSlider(Qt.Horizontal)
        self.slider.setMinimum(0)
        self.slider.setMaximum(180)
        self.slider.setValue(self.arrow_angle)
        self.slider.valueChanged.connect(self.update_arrow_angle)
        self.central_layout.addWidget(self.slider)

    def update_arrow_angle(self, value):
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
