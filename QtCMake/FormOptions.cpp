#include "FormOptions.h"
#include "./ui_FormOptions.h"

FormOptions::FormOptions(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormOptions)
{
    ui->setupUi(this);
}

FormOptions::~FormOptions()
{
    delete ui;
}

