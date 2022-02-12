/********************************************************************************
** Form generated from reading UI file 'solving.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLVING_H
#define UI_SOLVING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_solving
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_type;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *solving)
    {
        if (solving->objectName().isEmpty())
            solving->setObjectName(QString::fromUtf8("solving"));
        solving->resize(400, 600);
        centralwidget = new QWidget(solving);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_type = new QLabel(centralwidget);
        label_type->setObjectName(QString::fromUtf8("label_type"));
        label_type->setScaledContents(false);
        label_type->setAlignment(Qt::AlignCenter);
        label_type->setWordWrap(true);

        verticalLayout_5->addWidget(label_type);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 376, 308));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_3->addWidget(lineEdit_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_5->addWidget(pushButton);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout->addLayout(verticalLayout_5);

        solving->setCentralWidget(centralwidget);
        menubar = new QMenuBar(solving);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 21));
        solving->setMenuBar(menubar);
        statusbar = new QStatusBar(solving);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        solving->setStatusBar(statusbar);

        retranslateUi(solving);

        QMetaObject::connectSlotsByName(solving);
    } // setupUi

    void retranslateUi(QMainWindow *solving)
    {
        solving->setWindowTitle(QCoreApplication::translate("solving", "MainWindow", nullptr));
        label_type->setText(QString());
        label->setText(QCoreApplication::translate("solving", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\261\320\276\321\200 \320\261\321\203\320\272\320\262, \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\265\320\274\321\213\320\271 \320\262 \320\262\320\260\321\210\320\265\320\274 \320\267\320\260\320\264\320\260\320\275\320\270\320\270. \320\237\321\200\320\270\320\274\320\265\321\200: \320\220 \320\221 \320\222 \320\224 \320\244 \320\226", nullptr));
        label_2->setText(QCoreApplication::translate("solving", "\320\227\320\260\320\277\320\270\321\210\320\270\321\202\320\265 \320\272\320\276\320\264\320\276\320\262\321\213\320\265 \321\201\320\273\320\276\320\262\320\260 \320\264\320\273\321\217 \320\275\320\265\320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\261\321\203\320\272\320\262, \320\265\321\201\320\273\320\270 \320\272\320\276\320\264\320\276\320\262\320\276\320\265 \321\201\320\273\320\276\320\262\320\276 \320\275\320\265\320\270\320\267\320\262\320\265\321\201\321\202\320\275\320\276 - \320\277\320\276\321\201\321\202\320\260\320\262\321\214\321\202\320\265 \342\200\234-1\342\200\235", nullptr));
        label_3->setText(QCoreApplication::translate("solving", "\320\227\320\260\320\277\320\270\321\210\320\270\321\202\320\265 \321\201\320\273\320\276\320\262\320\276, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \321\202\321\200\320\265\320\261\321\203\320\265\321\202\321\201\321\217 \320\267\320\260\320\272\320\276\320\264\320\270\321\200\320\276\320\262\320\260\321\202\321\214. \320\237\321\200\320\270\320\274\320\265\321\200: \320\232\320\236\320\233\320\236\320\221\320\236\320\232", nullptr));
        pushButton->setText(QCoreApplication::translate("solving", "\320\277\321\203\321\201\320\272", nullptr));
        label_4->setText(QCoreApplication::translate("solving", "\320\236\321\202\320\262\320\265\321\202:", nullptr));
        label_5->setText(QCoreApplication::translate("solving", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class solving: public Ui_solving {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLVING_H
