#ifndef FORMOPTIONS_H
#define FORMOPTIONS_H

#include <QMainWindow>
#include "FileInfo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class FormOptions; }
QT_END_NAMESPACE
class FormType;

class FormOptions : public QMainWindow
{
    Q_OBJECT

public:
    inline static FileInfo fileInfo;

    FormOptions(QWidget *parent = nullptr);
    ~FormOptions();

    void Init(QString ProjDir, QString SubDir, QString PyDir);

private slots:

private:
    Ui::FormOptions *ui;
    QMap<QString, FormType*> m_FormTypes;

    void on_Cancel_clicked();
    void on_Generate_clicked();
};

#endif // FORMOPTIONS_H
