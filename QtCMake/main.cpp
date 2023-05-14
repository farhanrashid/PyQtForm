#include "FormOptions.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FormOptions w;
    w.show();
    return a.exec();
}
