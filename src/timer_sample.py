import sys
from PyQt5.QtWidgets import QApplication, QWidget, QLabel, QVBoxLayout, QPushButton, QMessageBox
from PyQt5.QtCore import QTimer, QTime, Qt

class TimerApp(QWidget):
    def __init__(self):
        super().__init__()

        self.init_ui()

    def init_ui(self):
        self.setGeometry(100, 100, 400, 200)
        self.setWindowTitle('3-Minute Timer')

        self.timer_label = QLabel('Time: 03:00', self)
        self.timer_label.setAlignment(Qt.AlignCenter)

        self.start_button = QPushButton('Start Timer', self)
        self.start_button.clicked.connect(self.start_timer)

        self.stop_button = QPushButton('Stop Timer', self)
        self.stop_button.clicked.connect(self.stop_timer)

        self.reset_button = QPushButton('Reset Timer', self)
        self.reset_button.clicked.connect(self.reset_timer)

        layout = QVBoxLayout()
        layout.addWidget(self.timer_label)
        layout.addWidget(self.start_button)
        layout.addWidget(self.stop_button)
        layout.addWidget(self.reset_button)
        self.setLayout(layout)

        self.timer = QTimer(self)
        self.timer.timeout.connect(self.update_timer)

        self.remaining_time = QTime(0, 3, 0)  # 3 minutes initially

    def start_timer(self):
        if not self.timer.isActive():
            self.timer.start(1000)  # Timer updates every 1000 milliseconds (1 second)
            self.start_button.setEnabled(False)
            self.stop_button.setEnabled(True)
            self.reset_button.setEnabled(True)
            self.setStyleSheet("background-color: #303030; color: white;")

    def stop_timer(self):
        self.timer.stop()
        self.start_button.setEnabled(True)
        self.stop_button.setEnabled(False)
        self.reset_button.setEnabled(True)
        self.setStyleSheet("background-color: #ffffff; color: black;")

    def reset_timer(self):
        self.timer.stop()
        self.remaining_time = QTime(0, 3, 0)
        self.timer_label.setText('Time: 03:00')
        self.start_button.setEnabled(True)
        self.stop_button.setEnabled(False)
        self.reset_button.setEnabled(False)
        self.setStyleSheet("background-color: #ffffff; color: black;")

    def update_timer(self):
        self.remaining_time = self.remaining_time.addSecs(-1)

        if self.remaining_time <= QTime(0, 0):
            self.timer.stop()
            self.timer_label.setText('Time: 00:00')
            QMessageBox.information(self, 'Timer Expired', '3 minutes have elapsed!', QMessageBox.Ok)
            self.start_button.setEnabled(True)
            self.stop_button.setEnabled(False)
            self.reset_button.setEnabled(False)
            self.setStyleSheet("background-color: #ffffff; color: black;")
        else:
            self.timer_label.setText(f'Time: {self.remaining_time.toString("mm:ss")}')

if __name__ == '__main__':
    app = QApplication(sys.argv)
    timer_app = TimerApp()
    timer_app.show()
    sys.exit(app.exec_())
