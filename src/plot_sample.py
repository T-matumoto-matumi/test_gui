import sys
from PyQt5.QtWidgets import QApplication, QGraphicsScene, QGraphicsView, QGraphicsRectItem, QGraphicsEllipseItem, QVBoxLayout, QWidget

class GraphicsExample(QWidget):
    def __init__(self):
        super(GraphicsExample, self).__init__()

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
        rect_item = QGraphicsRectItem(0, 0, 100, 100)
        rect_item.setPos(50, 50)
        self.scene.addItem(rect_item)

        # 楕円の追加
        ellipse_item = QGraphicsEllipseItem(0, 0, 80, 60)
        ellipse_item.setPos(200, 100)
        self.scene.addItem(ellipse_item)

def main():
    app = QApplication(sys.argv)
    window = GraphicsExample()
    window.setGeometry(100, 100, 400, 300)
    window.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
