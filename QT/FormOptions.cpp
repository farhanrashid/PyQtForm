#include "FormOptions.h"
#include "ui_FormOptions.h"

FormOptions::FormOptions(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormOptions)
{
    ui->setupUi(this);
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
    ProjDir = aProjDir;
    SubDir  = aSubDir;

}

void FormOptions::on_Generate_clicked()
{
    //TODO:

}


void FormOptions::on_Cancel_clicked()
{

}

