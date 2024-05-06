import sys
from PyQt5.QtWidgets import QApplication, QWidget, QLabel, QSlider, QVBoxLayout
from PyQt5.QtCore import Qt

class SliderExample(QWidget):
    def __init__(self):
        super().__init__()

        self.init_ui()

    def init_ui(self):
        # ウィンドウの設定
        self.setWindowTitle('スライダーの例')
        self.setGeometry(100, 100, 400, 200)

        # ラベルの作成
        self.label = QLabel('値: 0.00', self)

        # スライダーの作成
        self.slider = QSlider(Qt.Horizontal, self)
        self.slider.setMinimum(0)
        self.slider.setMaximum(100)
        self.slider.setSingleStep(1)  # 刻み幅を1に設定
        self.slider.valueChanged.connect(self.slider_value_changed)  # スライダーの値が変更されたときのイベントを関連付け

        # レイアウトの設定
        layout = QVBoxLayout()
        layout.addWidget(self.label)
        layout.addWidget(self.slider)
        self.setLayout(layout)

    def slider_value_changed(self):
        # スライダーの値が変更されたときに呼び出されるメソッド
        value = self.slider.value() / 100.0  # スライダーの値を0から1に変換
        self.label.setText(f'値: {value:.2f}')  # 値を小数点2桁まで表示

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = SliderExample()
    ex.show()
    sys.exit(app.exec_())
