#include "FormOptions.h"

#include <QApplication>
#include <QCommandLineParser>
#include <QCommandLineOption>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
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
                                        QCoreApplication::translate("main", "Sub directory or file"),
                                        QCoreApplication::translate("main", "SubDirectory"),
                                        "Sub-Directory"); //default value
    parser.addOption(SubDirectory);

    QCommandLineOption PyUIC("u",
                                        QCoreApplication::translate("main", "PyUIC path"),
                                        QCoreApplication::translate("main", "PyUIC"),
                                        "PyUIC"); //default value
    parser.addOption(PyUIC);

    parser.process(app);

    if(!parser.isSet(ProjectDirectory))
        qFatal("Project directory is required");

    if(!parser.isSet(SubDirectory))
        qFatal("Sub directory/file is required");

    if(!parser.isSet(PyUIC))
        qFatal("PyUIC is required");

    FormOptions formOptions;
    formOptions.Init(parser.values(ProjectDirectory).at(0),
           parser.values(SubDirectory).at(0),
           parser.values(PyUIC).at(0));
    formOptions.show();
    return app.exec();
}

