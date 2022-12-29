#ifndef FORMTYPE_H
#define FORMTYPE_H

#include <QString>
#define Dialog_With_Buttons_Bottom "Dialog with Buttons Bottom"
#define Dialog_With_Buttons_Right "Dialog with Buttons Right"
#define Dialog_With_Buttons "Dialog with Buttons"
#define Main_Window "Main Window"
#define Widget "Widget"

class FormType
{
public:
    virtual void Generate(QString ProjDir, QString SubDir) = 0;
    virtual ~FormType(){}

};

class FT_DialogWithButtonsBottom : public FormType
{
public:
    void Generate(QString ProjDir, QString SubDir);
};


class FT_DialogWithButtonsRight : public FormType
{
public:
    void Generate(QString ProjDir, QString SubDir);
};

class FT_DialogWithButtons : public FormType
{
public:
    void Generate(QString ProjDir, QString SubDir);
};

class FT_MainWindow : public FormType
{
public:
    void Generate(QString ProjDir, QString SubDir);
};

class FT_Widget : public FormType
{
public:
    void Generate(QString ProjDir, QString SubDir);
};



#endif // FORMTYPE_H
