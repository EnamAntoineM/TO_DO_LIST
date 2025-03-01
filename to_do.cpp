#include "to_do.h"
#include "qobjectdefs.h"
#include "qwindowdefs.h"
#include "ui_to_do.h"
#include <cstdlib>
#include <QShortcut>
#include <QKeyEvent>
#include <QTimer>

TO_DO::TO_DO(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TO_DO)
{
    ui->setupUi(this);
}

TO_DO::~TO_DO()
{
    delete ui;
}

namespace parameter {
int count = 0;
int position = 0;
} // namespace parameter

void TO_DO::on_Remove_clicked()
{
    parameter::position = ui->list_tasks->currentRow();
    ui->list_tasks->takeItem(parameter::position);
    parameter::count--;
}


void TO_DO::on_Edit_clicked()
{
    QListWidgetItem *current = ui->list_tasks->currentItem();
    ui->list_tasks->editItem(current);
}


void TO_DO::on_About_us_clicked()
{
    system("xdg-open https://github.com/EnamAntoineM");
}


void TO_DO::on_Removall_clicked()
{
    for(int i = 0; i != parameter::count; i++){
        ui->list_tasks->takeItem(0);
    }
}


void TO_DO::on_Add_clicked()
{
    if(!ui->Task->text().isEmpty()){
        parameter:: count++;
        QListWidgetItem *my_task = new QListWidgetItem(ui->Task->text(), ui->list_tasks);
        my_task->setFlags(my_task->flags() | Qt::ItemIsEditable);
        my_task->setFlags(my_task->flags() | Qt::ItemIsUserCheckable);
        my_task->setCheckState(Qt::Unchecked);
        ui->list_tasks->addItem(my_task);
        ui->Task->clear();
        ui->Task->setFocus();
    }
}
