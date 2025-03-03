/********************************************************************************
** Form generated from reading UI file 'to_do.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TO_DO_H
#define UI_TO_DO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TO_DO
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *Task;
    QPushButton *Add;
    QListWidget *list_tasks;
    QCalendarWidget *calendarWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *About_us;
    QPushButton *Edit;
    QPushButton *Remove;
    QPushButton *Removall;

    void setupUi(QMainWindow *TO_DO)
    {
        if (TO_DO->objectName().isEmpty())
            TO_DO->setObjectName("TO_DO");
        TO_DO->resize(800, 872);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::InsertText));
        TO_DO->setWindowIcon(icon);
        centralwidget = new QWidget(TO_DO);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Task = new QLineEdit(centralwidget);
        Task->setObjectName("Task");
        QFont font;
        font.setFamilies({QString::fromUtf8("Carlito")});
        font.setPointSize(13);
        font.setItalic(true);
        Task->setFont(font);
        Task->setCursorPosition(0);
        Task->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Task->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(Task);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu Mono derivative Powerline")});
        font1.setPointSize(17);
        font1.setBold(true);
        Add->setFont(font1);

        horizontalLayout_4->addWidget(Add);


        verticalLayout->addLayout(horizontalLayout_4);

        list_tasks = new QListWidget(centralwidget);
        list_tasks->setObjectName("list_tasks");
        list_tasks->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        verticalLayout->addWidget(list_tasks);

        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setMinimumSize(QSize(782, 381));
        calendarWidget->setMaximumSize(QSize(1324, 1235));
        calendarWidget->setGridVisible(true);

        verticalLayout->addWidget(calendarWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        About_us = new QPushButton(centralwidget);
        About_us->setObjectName("About_us");
        About_us->setFont(font1);

        horizontalLayout_2->addWidget(About_us);

        Edit = new QPushButton(centralwidget);
        Edit->setObjectName("Edit");
        Edit->setFont(font1);

        horizontalLayout_2->addWidget(Edit);

        Remove = new QPushButton(centralwidget);
        Remove->setObjectName("Remove");
        Remove->setFont(font1);

        horizontalLayout_2->addWidget(Remove);

        Removall = new QPushButton(centralwidget);
        Removall->setObjectName("Removall");
        Removall->setFont(font1);

        horizontalLayout_2->addWidget(Removall);


        verticalLayout->addLayout(horizontalLayout_2);

        TO_DO->setCentralWidget(centralwidget);

        retranslateUi(TO_DO);

        QMetaObject::connectSlotsByName(TO_DO);
    } // setupUi

    void retranslateUi(QMainWindow *TO_DO)
    {
        TO_DO->setWindowTitle(QCoreApplication::translate("TO_DO", "TO_DO", nullptr));
        Task->setText(QString());
        Task->setPlaceholderText(QCoreApplication::translate("TO_DO", "What do you want to do today buddy ?", nullptr));
        Add->setText(QCoreApplication::translate("TO_DO", "ADD", nullptr));
        About_us->setText(QCoreApplication::translate("TO_DO", "About us", nullptr));
        Edit->setText(QCoreApplication::translate("TO_DO", "Edit", nullptr));
        Remove->setText(QCoreApplication::translate("TO_DO", "Remove", nullptr));
        Removall->setText(QCoreApplication::translate("TO_DO", "Remove ALL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TO_DO: public Ui_TO_DO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TO_DO_H
