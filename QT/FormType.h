#ifndef FORMTYPE_H
#define FORMTYPE_H

#include <QString>

class FormType
{
public:
    virtual void Generate(QString ProjDir, QString SubDir, QString FormName) = 0;
    virtual ~FormType(){}
};

class FT_DialogWithButtonsBottom : public FormType
{
public:
    void Generate(QString ProjDir, QString SubDir, QString FormName);
};


class FT_DialogWithButtonsRight : public FormType
{
public:
    void Generate(QString ProjDir, QString SubDir, QString FormName);
};

class FT_DialogWithButtons : public FormType
{
public:
    void Generate(QString ProjDir, QString SubDir, QString FormName);
};

class FT_MainWindow : public FormType
{
public:
    void Generate(QString ProjDir, QString SubDir, QString FormName);
};

class FT_Widget : public FormType
{
public:
    void Generate(QString ProjDir, QString SubDir, QString FormName);
};


#endif // FORMTYPE_H
