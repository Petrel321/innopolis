/********************************************************************************
** Form generated from reading UI file 'changeprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPROFILE_H
#define UI_CHANGEPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changeprofile
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLineEdit *lineEdit_newlogin;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_choose_file;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_save_changes;
    QPushButton *pushButton_exit;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *changeprofile)
    {
        if (changeprofile->objectName().isEmpty())
            changeprofile->setObjectName(QString::fromUtf8("changeprofile"));
        changeprofile->resize(400, 600);
        centralwidget = new QWidget(changeprofile);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit_newlogin = new QLineEdit(centralwidget);
        lineEdit_newlogin->setObjectName(QString::fromUtf8("lineEdit_newlogin"));
        lineEdit_newlogin->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit_newlogin);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        pushButton_choose_file = new QPushButton(centralwidget);
        pushButton_choose_file->setObjectName(QString::fromUtf8("pushButton_choose_file"));

        verticalLayout_2->addWidget(pushButton_choose_file);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_save_changes = new QPushButton(centralwidget);
        pushButton_save_changes->setObjectName(QString::fromUtf8("pushButton_save_changes"));

        verticalLayout_4->addWidget(pushButton_save_changes);

        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));

        verticalLayout_4->addWidget(pushButton_exit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        verticalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        changeprofile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(changeprofile);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 21));
        changeprofile->setMenuBar(menubar);
        statusbar = new QStatusBar(changeprofile);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        changeprofile->setStatusBar(statusbar);

        retranslateUi(changeprofile);

        QMetaObject::connectSlotsByName(changeprofile);
    } // setupUi

    void retranslateUi(QMainWindow *changeprofile)
    {
        changeprofile->setWindowTitle(QCoreApplication::translate("changeprofile", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("changeprofile", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\270\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("changeprofile", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\204\320\276\321\202\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        pushButton_choose_file->setText(QCoreApplication::translate("changeprofile", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_save_changes->setText(QCoreApplication::translate("changeprofile", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("changeprofile", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changeprofile: public Ui_changeprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPROFILE_H
