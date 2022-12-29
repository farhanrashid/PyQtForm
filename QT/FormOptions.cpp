#include "FormOptions.h"
#include "ui_FormOptions.h"
#include "FormType.h"

FormOptions::FormOptions(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormOptions)
{
    ui->setupUi(this);
    m_FormTypes.insert(Dialog_With_Buttons_Bottom, new FT_DialogWithButtonsBottom());
    m_FormTypes.insert(Dialog_With_Buttons_Right, new FT_DialogWithButtonsRight());
    m_FormTypes.insert(Dialog_With_Buttons, new FT_DialogWithButtons());
    m_FormTypes.insert(Main_Window, new FT_MainWindow());
    m_FormTypes.insert(Widget, new FT_Widget());

    foreach(QString type, m_FormTypes.keys())
        ui->cbFormType->addItem(type);

    connect(ui->pbGenerate, &QPushButton::clicked, this, &FormOptions::on_Generate_clicked);
    connect(ui->pbCancel, &QPushButton::clicked, this, &FormOptions::on_Cancel_clicked);
}

FormOptions::~FormOptions()
{
    qDeleteAll(m_FormTypes); //delete all values(FormTyp *)
    m_FormTypes.clear();
    delete ui;
}

void FormOptions::Init(QString ProjDir, QString SubDir, QString PyDir)
{
    ui->leProjDir->setText(ProjDir);
    ui->leSubDir->setText(SubDir);
    ui->lePyInterpreter->setText(PyDir);
    m_ProjDir = ProjDir;
    m_SubDir  = SubDir;
    m_PyDir = PyDir;

}

void FormOptions::on_Generate_clicked()
{
    //TODO:
    FormType *FT = m_FormTypes[ui->cbFormType->currentText()];
    if(FT != NULL)
        FT->Generate(m_ProjDir, m_SubDir, "");


}


void FormOptions::on_Cancel_clicked()
{

}

