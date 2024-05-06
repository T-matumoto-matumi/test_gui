import sys
from PyQt5.QtWidgets import QApplication, QGraphicsScene, QGraphicsView, QGraphicsRectItem, QVBoxLayout, QWidget
from PyQt5.QtGui import QColor

class RectangleExample(QWidget):
    def __init__(self):
        super(RectangleExample, self).__init__()

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
        # 矩形の追加
        rect_item = QGraphicsRectItem(0, 0, 253.33, 66.67)
        rect_item.setPos(50, 50)

        # 塗りつぶし色を水色に設定
        rect_item.setBrush(QColor(0, 255, 255))  # RGBで水色を表現

        self.scene.addItem(rect_item)

def main():
    app = QApplication(sys.argv)
    window = RectangleExample()
    window.setGeometry(100, 100, 400, 300)
    window.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()

