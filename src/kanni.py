# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'kanni.ui'
#
# Created by: PyQt5 UI code generator 5.14.1
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(1904, 1065)
        MainWindow.setWindowTitle("robohan-GUI")
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap("robohan_icon.jpg"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        MainWindow.setWindowIcon(icon)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.condition = QtWidgets.QLabel(self.centralwidget)
        self.condition.setGeometry(QtCore.QRect(50, 180, 591, 151))
        font = QtGui.QFont()
        font.setPointSize(34)
        font.setBold(True)
        font.setWeight(75)
        self.condition.setFont(font)
        self.condition.setStyleSheet("background-color: rgb(0, 255, 0);")
        self.condition.setAlignment(QtCore.Qt.AlignCenter)
        self.condition.setObjectName("condition")
        self.retry = QtWidgets.QPushButton(self.centralwidget)
        self.retry.setGeometry(QtCore.QRect(1330, 70, 511, 351))
        font = QtGui.QFont()
        font.setPointSize(70)
        font.setBold(True)
        font.setWeight(75)
        self.retry.setFont(font)
        self.retry.setStyleSheet("background-color: rgb(114, 159, 207);")
        self.retry.setObjectName("retry")
        self.emergency = QtWidgets.QPushButton(self.centralwidget)
        self.emergency.setGeometry(QtCore.QRect(1330, 480, 511, 441))
        font = QtGui.QFont()
        font.setPointSize(70)
        font.setBold(True)
        font.setWeight(75)
        self.emergency.setFont(font)
        self.emergency.setStyleSheet("background-color: rgb(239, 125, 125);")
        self.emergency.setObjectName("emergency")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setGeometry(QtCore.QRect(260, 410, 181, 61))
        font = QtGui.QFont()
        font.setPointSize(24)
        self.label.setFont(font)
        self.label.setStyleSheet("background-color: rgb(252, 175, 62);")
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")
        self.search_image = QtWidgets.QLabel(self.centralwidget)
        self.search_image.setGeometry(QtCore.QRect(50, 470, 581, 461))
        self.search_image.setText("")
        self.search_image.setPixmap(QtGui.QPixmap("robohan_title.jpg"))
        self.search_image.setScaledContents(True)
        self.search_image.setWordWrap(False)
        self.search_image.setObjectName("search_image")
        self.label_2 = QtWidgets.QLabel(self.centralwidget)
        self.label_2.setGeometry(QtCore.QRect(870, 410, 221, 61))
        font = QtGui.QFont()
        font.setPointSize(23)
        self.label_2.setFont(font)
        self.label_2.setStyleSheet("background-color: rgb(252, 175, 62);")
        self.label_2.setAlignment(QtCore.Qt.AlignCenter)
        self.label_2.setObjectName("label_2")
        self.sairo_image = QtWidgets.QLabel(self.centralwidget)
        self.sairo_image.setGeometry(QtCore.QRect(690, 470, 611, 461))
        self.sairo_image.setText("")
        self.sairo_image.setPixmap(QtGui.QPixmap("robohan_title.jpg"))
        self.sairo_image.setScaledContents(True)
        self.sairo_image.setObjectName("sairo_image")
        self.label_3 = QtWidgets.QLabel(self.centralwidget)
        self.label_3.setGeometry(QtCore.QRect(40, 0, 241, 121))
        self.label_3.setText("")
        self.label_3.setPixmap(QtGui.QPixmap("robohan_title.jpg"))
        self.label_3.setScaledContents(True)
        self.label_3.setObjectName("label_3")
        self.stage_change = QtWidgets.QPushButton(self.centralwidget)
        self.stage_change.setGeometry(QtCore.QRect(310, 10, 301, 111))
        font = QtGui.QFont()
        font.setPointSize(25)
        font.setBold(True)
        font.setWeight(75)
        self.stage_change.setFont(font)
        self.stage_change.setStyleSheet("background-color: rgb(245, 121, 0);")
        self.stage_change.setObjectName("stage_change")
        MainWindow.setCentralWidget(self.centralwidget)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "Robohan-GUI"))
        self.condition.setText(_translate("MainWindow", "ロボットの状態"))
        self.retry.setText(_translate("MainWindow", "Retry"))
        self.emergency.setText(_translate("MainWindow", "Emergency"))
        self.label.setText(_translate("MainWindow", "探索カメラ"))
        self.label_2.setText(_translate("MainWindow", "サイロ用カメラ"))
        self.stage_change.setText(_translate("MainWindow", "ステージ"))