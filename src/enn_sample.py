import sys
from PyQt5.QtWidgets import QApplication, QGraphicsScene, QGraphicsView, QGraphicsEllipseItem, QVBoxLayout, QWidget
from PyQt5.QtGui import QColor

class CircleExample(QWidget):
    def __init__(self):
        super(CircleExample, self).__init__()

        # QGraphicsSceneの作成
        self.scene = QGraphicsScene()
        self.create_scene()

        # QGraphicsViewの作成とシーンの設定
        self.view = QGraphicsView()
        self.view.setScene(self.scene)

        # レイアウトの設定
        layout = QVBoxLayout(self)
        layout.addWidget(self.view)

    def create_scene(self):
        # 円の追加
        circle_item = QGraphicsEllipseItem(0, 0, 100, 100)  # (x, y, width, height)で指定
        circle_item.setPos(50, 50)

        # 塗りつぶし色を赤に設定
        circle_item.setBrush(QColor(255, 0, 0))  # RGBで赤を表現

        self.scene.addItem(circle_item)

def main():
    app = QApplication(sys.argv)
    window = CircleExample()
    window.setGeometry(100, 100, 400, 300)
    window.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
