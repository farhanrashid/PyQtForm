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

private:
    Ui::FormOptions *ui;
};
#endif // FORMOPTIONS_H
