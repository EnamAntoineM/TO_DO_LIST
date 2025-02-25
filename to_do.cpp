#include "to_do.h"
#include "ui_to_do.h"

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

void TO_DO::on_Clear_clicked()
{

}


void TO_DO::on_Remove_clicked()
{

}


void TO_DO::on_Edit_clicked()
{

}


void TO_DO::on_About_us_clicked()
{

}


void TO_DO::on_Removall_clicked()
{

}


void TO_DO::on_Add_clicked()
{

}

