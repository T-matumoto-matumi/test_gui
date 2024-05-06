import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QPushButton
from PyQt5.QtGui import QColor

class MyWindow(QMainWindow):
    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):
        self.setGeometry(300, 300, 400, 200)
        self.setWindowTitle('Color Change on Button Click')

        # ボタンの作成
        self.button = QPushButton('Click me!', self)
        self.button.setGeometry(150, 50, 100, 50)

        # ボタンがクリックされたときに呼び出されるスロットを設定
        self.button.clicked.connect(self.onButtonClick)

    def onButtonClick(self):
        # ボタンがクリックされたら、ボタンの背景色を赤に変更
        self.button.setStyleSheet("background-color: red;")

if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = MyWindow()
    window.show()
    sys.exit(app.exec_())
