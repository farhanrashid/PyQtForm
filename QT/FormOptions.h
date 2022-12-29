#ifndef FORMOPTIONS_H
#define FORMOPTIONS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FormOptions; }
QT_END_NAMESPACE
class FormType;

class FormOptions : public QMainWindow
{
    Q_OBJECT

public:
    FormOptions(QWidget *parent = nullptr);
    ~FormOptions();

    void Init(QString ProjDir, QString SubDir, QString PyInerpreter);

private slots:

private:
    Ui::FormOptions *ui;
    QString m_ProjDir, m_SubDir, m_PyInerpreter;
    QMap<QString, FormType*> m_FormTypes;

    void on_Cancel_clicked();
    void on_Generate_clicked();


};
#endif // FORMOPTIONS_H
