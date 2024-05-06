import sys
from PyQt5.QtWidgets import QApplication, QGraphicsScene, QGraphicsView, QGraphicsLineItem, QVBoxLayout, QWidget, QPushButton
from PyQt5.QtCore import Qt

class PlotWidget(QWidget):
    def __init__(self, x, y):
        super(PlotWidget, self).__init__()

        # x, y をメンバ変数に保存
        self.x = x
        self.y = y

        # QGraphicsSceneの作成
        self.scene = QGraphicsScene()
        self.setLayout(QVBoxLayout())
        self.view = QGraphicsView(self.scene)
        self.layout().addWidget(self.view)

        # アイテムのリストを保持する変数
        self.plot_items = []

        # グラフのプロット
        self.plot(x, y)

        # Clear Graphボタンの追加
        clear_button = QPushButton("Clear Graph", self)
        clear_button.clicked.connect(self.clear_graph)
        self.layout().addWidget(clear_button)

        # Clear Itemボタンの追加
        clear_item_button = QPushButton("Clear Item", self)
        clear_item_button.clicked.connect(self.clear_item)
        self.layout().addWidget(clear_item_button)

    def plot(self, x, y):
        # グラフの描画
        for i in range(len(x) - 1):
            line = QGraphicsLineItem(x[i], -y[i], x[i+1], -y[i+1])  # y軸を上向きにするために負の値を使用
            line.setPen(Qt.blue)
            self.scene.addItem(line)
            self.plot_items.append(line)  # アイテムをリストに追加

        # 軸の描画
        self.draw_axes()

    def draw_axes(self):
        # x軸
        x_axis = QGraphicsLineItem(0, 0, max(self.x), 0)
        x_axis.setPen(Qt.black)
        self.scene.addItem(x_axis)

        # y軸
        y_axis = QGraphicsLineItem(0, min(self.y), 0, 0)
        y_axis.setPen(Qt.black)
        self.scene.addItem(y_axis)

    def clear_graph(self):
        # グラフのクリア
        self.scene.clear()
        self.plot_items = []  # アイテムリストもクリア

    def clear_item(self):
        # 最後に追加されたアイテムを削除
        if self.plot_items:
            item = self.plot_items.pop()
            self.scene.removeItem(item)

def main():
    app = QApplication(sys.argv)

    # 仮のデータ生成
    x = [i for i in range(10)]
    y = [i**2 for i in x]

    # ウィンドウの作成と表示
    plot_widget = PlotWidget(x, y)
    plot_widget.setGeometry(100, 100, 400, 300)
    plot_widget.show()

    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
