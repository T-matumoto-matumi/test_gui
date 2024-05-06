import sys
from PyQt5.QtWidgets import QApplication, QGraphicsScene, QGraphicsView, QGraphicsPathItem, QMainWindow, QVBoxLayout, QWidget
from PyQt5.QtGui import QBrush, QPen, QPainterPath
from PyQt5.QtCore import Qt, QPointF

class ArrowItem(QGraphicsPathItem):
    def __init__(self):
        super(ArrowItem, self).__init__()

        # 矢印の形状を定義
        arrow_path = QPainterPath()
        arrow_path.moveTo(15, -5)
        arrow_path.lineTo(0, 0)
        arrow_path.lineTo(15, 5)

        # 線を追加
        arrow_path.moveTo(0, 0)
        arrow_path.lineTo(50, 0)  # 矢印の棒の長さ

        self.setPath(arrow_path)

        self.setPos(50, 50)  # 矢印の位置を設定
        self.setBrush(QBrush(Qt.blue))
        self.setPen(QPen(Qt.black, 2))  # 線の太さを設定

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

        # 矢印の描画
        arrow_item = ArrowItem()
        self.scene.addItem(arrow_item)

def main():
    app = QApplication(sys.argv)
    window = ArrowExample()
    window.setGeometry(100, 100, 400, 300)
    window.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
