#ifndef FORMTYPE_H
#define FORMTYPE_H

#include <QString>

class FileInfo;

class FormType
{
public:
    virtual void Generate() = 0;
    virtual ~FormType(){}
};

class FT_DialogWithButtonsBottom : public FormType
{
public:
    void Generate();
};


class FT_DialogWithButtonsRight : public FormType
{
public:
    void Generate();
};

class FT_DialogWithButtons : public FormType
{
public:
    void Generate();
};

class FT_MainWindow : public FormType
{
public:
    void Generate();
};

class FT_Widget : public FormType
{
public:
    void Generate();
};


#endif // FORMTYPE_H
