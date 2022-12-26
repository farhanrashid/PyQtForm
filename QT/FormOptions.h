#ifndef FORMOPTIONS_H
#define FORMOPTIONS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FormOptions; }
QT_END_NAMESPACE

class FormOptions : public QMainWindow
{
    Q_OBJECT

public:
    FormOptions(QWidget *parent = nullptr);
    ~FormOptions();

    void Init(QString aProjDir, QString aSubDir);

private slots:

private:
    Ui::FormOptions *ui;
    QString ProjDir, SubDir;
    void on_Cancel_clicked();
    void on_Generate_clicked();


};
#endif // FORMOPTIONS_H
