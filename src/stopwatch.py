import sys
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout, QPushButton, QProgressBar, QLabel
from PyQt5.QtCore import QTimer


class TimerApp(QWidget):
    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):
        self.setWindowTitle('3分タイマー')
        self.setGeometry(300, 300, 300, 150)

        self.layout = QVBoxLayout()

        self.label = QLabel('残り時間: 3:00')
        self.progress_bar = QProgressBar()
        self.start_button = QPushButton('タイマー開始')
        self.start_button.clicked.connect(self.toggle_timer)

        self.layout.addWidget(self.label)
        self.layout.addWidget(self.progress_bar)
        self.layout.addWidget(self.start_button)

        self.timer = QTimer(self)
        self.timer.timeout.connect(self.update_timer)

        self.setLayout(self.layout)
        self.is_timer_running = False

    def toggle_timer(self):
        if self.is_timer_running:
            self.timer.stop()
            self.start_button.setText('タイマーリセット')
        else:
            self.remaining_time = 180  # 3分を秒で表したもの
            self.timer.start(1000)  # 1秒ごとに更新
            self.start_button.setText('タイマーストップ')

        self.is_timer_running = not self.is_timer_running

    def update_timer(self):
        self.remaining_time -= 1
        minutes = self.remaining_time // 60
        seconds = self.remaining_time % 60
        self.label.setText(f'残り時間: {minutes:02d}:{seconds:02d}')

        progress_value = int((self.remaining_time / 180) * 100)
        self.progress_bar.setValue(progress_value)

        if self.remaining_time <= 0:
            self.timer.stop()
            self.label.setText('時間切れです！')
            self.is_timer_running = False
            self.start_button.setText('タイマーリセット')

if __name__ == '__main__':
    app = QApplication(sys.argv)
    timer_app = TimerApp()
    timer_app.show()
    sys.exit(app.exec_())
