/********************************************************************************
** Form generated from reading UI file 'tasks.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKS_H
#define UI_TASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tasks
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_title;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox_task_types;
    QLabel *label_text;
    QScrollArea *scrollArea_task;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tasks)
    {
        if (tasks->objectName().isEmpty())
            tasks->setObjectName(QString::fromUtf8("tasks"));
        tasks->resize(400, 600);
        centralwidget = new QWidget(tasks);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setAlignment(Qt::AlignCenter);
        label_title->setWordWrap(true);

        verticalLayout_2->addWidget(label_title);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox_task_types = new QComboBox(centralwidget);
        comboBox_task_types->setObjectName(QString::fromUtf8("comboBox_task_types"));

        verticalLayout->addWidget(comboBox_task_types);


        verticalLayout_2->addLayout(verticalLayout);

        label_text = new QLabel(centralwidget);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        label_text->setTextFormat(Qt::AutoText);
        label_text->setScaledContents(false);
        label_text->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_text->setWordWrap(true);
        label_text->setOpenExternalLinks(false);

        verticalLayout_2->addWidget(label_text);

        scrollArea_task = new QScrollArea(centralwidget);
        scrollArea_task->setObjectName(QString::fromUtf8("scrollArea_task"));
        scrollArea_task->setStyleSheet(QString::fromUtf8(""));
        scrollArea_task->setWidgetResizable(true);
        scrollArea_task->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 378, 426));
        scrollArea_task->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea_task);


        horizontalLayout->addLayout(verticalLayout_2);

        tasks->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tasks);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 21));
        tasks->setMenuBar(menubar);
        statusbar = new QStatusBar(tasks);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        tasks->setStatusBar(statusbar);

        retranslateUi(tasks);

        QMetaObject::connectSlotsByName(tasks);
    } // setupUi

    void retranslateUi(QMainWindow *tasks)
    {
        tasks->setWindowTitle(QCoreApplication::translate("tasks", "MainWindow", nullptr));
        label_title->setText(QCoreApplication::translate("tasks", "\320\232\320\276\320\264\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\270 \320\264\320\265\320\272\320\276\320\264\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("tasks", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\262\320\260\321\200\320\270\320\260\320\275\321\202 \320\267\320\260\320\264\320\260\320\275\320\270\321\217", nullptr));
        comboBox_task_types->setPlaceholderText(QCoreApplication::translate("tasks", "...", nullptr));
        label_text->setText(QCoreApplication::translate("tasks", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\321\200\320\270\320\274\320\265\321\200, \320\275\320\260\320\270\320\261\320\276\320\273\320\265\320\265 \320\277\320\276\320\264\321\205\320\276\320\264\321\217\321\211\320\270\320\271 \320\264\320\273\321\217 \320\262\320\260\321\210\320\265\320\263\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 (\320\265\321\201\320\273\320\270 \321\202\320\260\320\272\320\276\320\263\320\276 \320\275\320\265\321\202, \320\277\321\200\320\270\320\275\320\276\321\201\320\270\320\274 \321\201\320\262\320\276\320\270 \320\270\320\267\320\262\320\270\320\275\320\265\320\275\320\270\321\217, \320\266\320\264\320\270\321\202\320\265 \320\262 \321\201\320\272\320\276\321\200\320\276\320\274 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \321\201\320\262\320\265\320\266\320\270\321\205 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\271)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tasks: public Ui_tasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKS_H
