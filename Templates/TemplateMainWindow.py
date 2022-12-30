from PyQt5.QtWidgets import QMainWindow
from Src.TemplateMainWindow_UI import Ui_TemplateMainWindow


class TemplateMainWindow(Ui_TemplateMainWindow, QMainWindow):
    # constructor
    def __init__(self):
        super().__init__()
        super().setupUi(self)

        ###### Add Events ######
        # self.button.clicked.connect(self.button_clicked)

#     def button_clicked(self=None):
#        self.textEdit.setText("clicked...")


if __name__ == "__main__":
    import sys
    from PyQt5 import QtWidgets

    app = QtWidgets.QApplication(sys.argv)
    w = TemplateMainWindow()
    w.show()
    sys.exit(app.exec_())