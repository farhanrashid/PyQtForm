from PyQt5.QtWidgets import QMainWindow
from Src.TEMPLATE_UI import Ui_TEMPLATEForm


class TEMPLATEForm(Ui_TEMPLATEForm, QMainWindow):
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
    ThisForm = TEMPLATEForm()
    ThisForm.show()
    sys.exit(app.exec_())