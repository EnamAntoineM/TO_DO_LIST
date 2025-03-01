#ifndef TO_DO_H
#define TO_DO_H

#include <QMainWindow>
#include"iostream"
QT_BEGIN_NAMESPACE
namespace Ui {
class TO_DO;
}
QT_END_NAMESPACE

class TO_DO : public QMainWindow
{
    Q_OBJECT

public:
    TO_DO(QWidget *parent = nullptr);
    ~TO_DO();

private slots:

    void on_Remove_clicked();

    void on_Edit_clicked();

    void on_About_us_clicked();

    void on_Removall_clicked();

    void on_Add_clicked();

//    void on_Task_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::TO_DO *ui;
};
#endif // TO_DO_H
