#ifndef FORMTYPE_H
#define FORMTYPE_H

#include <QString>
#define Dialog_with_Buttons_Bottom "Dialog with Buttons Bottom"
#define Dialog_with_Buttons_Right "Dialog with Buttons Right"
#define Dialog_with_Buttons "Dialog with Buttons"
#define Main_Window "Main Window"
#define Widget "Widget"

class FormType
{
public:
    QString m_Name;
    FormType(QString Name):m_Name{Name}
    {
    }
    virtual void Generate(QString ProjDir, QString SubDir) = 0;
};

class FT_MainWindow : public FormType
{
public:
    FT_MainWindow():FormType(Main_Window)
    {
    }

    void Generate(QString ProjDir, QString SubDir);
};


#endif // FORMTYPE_H
