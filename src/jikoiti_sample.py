import sys
import random
from PyQt5.QtWidgets import QApplication, QGraphicsScene, QGraphicsView, QGraphicsLineItem, QGraphicsEllipseItem,QGraphicsTextItem
from PyQt5.QtCore import Qt

class GraphView(QGraphicsView):
    def __init__(self):
        super().__init__()

        # Graphics scene
        self.scene = QGraphicsScene(self)
        self.setScene(self.scene)

        # Set scene boundaries
        self.setSceneRect(0, 0, 400, 400)

        # Draw x-axis with ticks and labels
        self.draw_x_axis()

        # Draw y-axis with ticks and labels
        self.draw_y_axis()

        # Plot random points
        self.plot_random_points(50)

    def draw_x_axis(self):
        x_axis = QGraphicsLineItem(0, 400, 400, 400)
        x_axis.setPen(Qt.black)
        self.scene.addItem(x_axis)

        # Draw ticks and labels
        for i in range(0, 401, 50):
            tick = QGraphicsLineItem(i, 396, i, 400)
            self.scene.addItem(tick)

            label = QGraphicsTextItem(str(i))
            label.setPos(i - 10, 394)
            self.scene.addItem(label)

    def draw_y_axis(self):
        y_axis = QGraphicsLineItem(0, 0, 0, 400)
        y_axis.setPen(Qt.black)
        self.scene.addItem(y_axis)

        # Draw ticks and labels
        for i in range(0, 401, 50):
            tick = QGraphicsLineItem(4, 400 - i, 0, 400 - i)
            self.scene.addItem(tick)

            label = QGraphicsTextItem(str(i))
            label.setPos(7, 400 - i - 10)
            self.scene.addItem(label)

    def plot_random_points(self, num_points):
        for _ in range(num_points):
            x = random.uniform(0, 400)
            y = random.uniform(0, 400)

            point_item = QGraphicsEllipseItem(x - 2, y - 2, 4, 4)
            point_item.setBrush(Qt.red)
            self.scene.addItem(point_item)

def main():
    app = QApplication(sys.argv)

    # Create the graph view
    graph_view = GraphView()
    graph_view.setWindowTitle("Graph Viewer")
    graph_view.setGeometry(100, 100, 400, 400)
    graph_view.show()

    sys.exit(app.exec_())

if __name__ == "__main__":
    main()