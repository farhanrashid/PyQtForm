#include "FormOptions.h"
#include "ui_FormOptions.h"
#include "FormType.h"

FormOptions::FormOptions(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormOptions)
{
    ui->setupUi(this);
    m_FormTypes.insert(Main_Window, new FT_MainWindow());

    foreach(QString type, m_FormTypes.keys())
        ui->cbFormType->addItem(type);

    connect(ui->pbGenerate, &QPushButton::clicked, this, &FormOptions::on_Generate_clicked);
    connect(ui->pbCancel, &QPushButton::clicked, this, &FormOptions::on_Cancel_clicked);
}

FormOptions::~FormOptions()
{
    delete ui;
}

void FormOptions::Init(QString aProjDir, QString aSubDir)
{
    ui->leProjDir->setText(aProjDir);
    ui->leSubDir->setText(aSubDir);
    m_ProjDir = aProjDir;
    m_SubDir  = aSubDir;

}

void FormOptions::on_Generate_clicked()
{
    //TODO:
    FormType *FT = m_FormTypes[ui->cbFormType->currentText()];
    if(FT != NULL)
        FT->Generate(m_ProjDir, m_SubDir);


}


void FormOptions::on_Cancel_clicked()
{

}

