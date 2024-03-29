#include "FormOptions.h"
#include "ui_FormOptions.h"
#include "FormType.h"
#include "FileInfo.h"

FormOptions::FormOptions(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormOptions)
{
    ui->setupUi(this);

    m_FormTypes.insert("Dialog with Buttons Bottom", new FT_DialogWithButtonsBottom());
    m_FormTypes.insert("Dialog with Buttons Right", new FT_DialogWithButtonsRight());
    m_FormTypes.insert("Dialog with Buttons", new FT_DialogWithButtons());
    m_FormTypes.insert("Main Window", new FT_MainWindow());
    m_FormTypes.insert("Widget", new FT_Widget());

    foreach(QString type, m_FormTypes.keys())
        ui->cbFormType->addItem(type);

    connect(ui->pbGenerate, &QPushButton::clicked, this, &FormOptions::on_Generate_clicked);
    connect(ui->pbCancel, &QPushButton::clicked, this, &FormOptions::on_Cancel_clicked);
}

FormOptions::~FormOptions()
{
    qDeleteAll(m_FormTypes); //delete all values(FormType *)
    m_FormTypes.clear();
    delete ui;
}

void FormOptions::Init(QString ProjDir, QString SubDir, QString PyUIC)
{    
    fileInfo.ProjDir = ProjDir;
    fileInfo.SubDir = SubDir;
    fileInfo.PyUIC = PyUIC;

    //TODO :
    ui->leProjDir->setText(ProjDir);
    ui->leSubDir->setText(SubDir);
    ui->lePyUIC->setText(PyUIC);
}

void FormOptions::on_Generate_clicked()
{
    FormType *FT = m_FormTypes[ui->cbFormType->currentText()];
    if(FT != NULL)
        FT->Generate();
}

void FormOptions::on_Cancel_clicked()
{
    //TODO :
}

