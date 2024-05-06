import sys
from PyQt5.QtWidgets import QApplication, QMainWindow

class MyMainWindow(QMainWindow):
    def __init__(self):
        super().__init__()

        self.init_ui()

    def init_ui(self):
        self.setGeometry(100, 100, 400, 300)
        self.setWindowTitle('Black Main Window')

        # メインウィンドウの背景色を黒に設定
        self.setStyleSheet("background-color: black;")

if __name__ == '__main__':
    app = QApplication(sys.argv)
    main_window = MyMainWindow()
    main_window.show()
    sys.exit(app.exec_())
