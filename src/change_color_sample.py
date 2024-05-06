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

        # ボタンの初期の背景色を保存する変数
        self.original_color = self.button.palette().color(self.button.backgroundRole())

    def onButtonClick(self):
        # ボタンがクリックされたら、現在の背景色を取得
        current_color = self.button.palette().color(self.button.backgroundRole())

        # 色が赤の場合は元の色に戻し、それ以外の場合は赤に変更
        if current_color == QColor('red'):
            self.button.setStyleSheet(f"background-color: {self.original_color.name()};")
        else:
            self.button.setStyleSheet("background-color: red;")

if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = MyWindow()
    window.show()
    sys.exit(app.exec_())
