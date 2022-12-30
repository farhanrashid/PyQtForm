#include "FormOptions.h"

#include <QApplication>
#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QDebug>

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
                                        QCoreApplication::translate("main", "Sub directory or File"),
                                        QCoreApplication::translate("main", "SubDirectory"),
                                        "Sub-Directory"); //default value
    parser.addOption(SubDirectory);

    QCommandLineOption PythonDirectory("i",
                                        QCoreApplication::translate("main", "Python directory"),
                                        QCoreApplication::translate("main", "PythonDirectory"),
                                        "Python-Directory"); //default value
    parser.addOption(PythonDirectory);

    parser.process(app);

    if(!parser.isSet(ProjectDirectory))
        qFatal("Project directory is required");

    if(!parser.isSet(SubDirectory))
        qFatal("Sub directory/file is required");

    if(!parser.isSet(PythonDirectory))
        qFatal("Python directory is required");

    FormOptions formOptions;
    formOptions.Init(parser.values(ProjectDirectory).at(0),
           parser.values(SubDirectory).at(0),
           parser.values(PythonDirectory).at(0));
    formOptions.show();
    return app.exec();
}

