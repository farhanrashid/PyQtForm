#include "FormOptions.h"

#include <QApplication>
#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCommandLineParser parser;
    parser.setApplicationDescription("PyQt5 Form Tool");
    parser.addHelpOption();
    parser.addVersionOption();

    QCommandLineOption ProjectDirectory("p",
                                        QCoreApplication::translate("main", "Python project <directory>."),
                                        QCoreApplication::translate("main", "PythonProject"),
                                        "Python-Project"); //default value

    parser.addOption(ProjectDirectory);



    QCommandLineOption SubDirectory("d",
                                        QCoreApplication::translate("main", "Sub directory or File"),
                                        QCoreApplication::translate("main", "SubDirectory"),
                                        "Sub-Directory"); //default value

    parser.addOption(SubDirectory);

    parser.process(a);

    FormOptions w;
    w.Init(parser.values(ProjectDirectory).at(0), parser.values(SubDirectory).at(0));
    w.show();
    return a.exec();
}

