/********************************************************************************
** Form generated from reading UI file 'registration_form.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_FORM_H
#define UI_REGISTRATION_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_Registration_form
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_login;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_confirm_password;
    QCheckBox *checkBox;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_registrate;
    QPushButton *pushButton_back;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Registration_form)
    {
        if (Registration_form->objectName().isEmpty())
            Registration_form->setObjectName(QString::fromUtf8("Registration_form"));
        Registration_form->resize(400, 600);
        centralwidget = new QWidget(Registration_form);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 6, 6, 6);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit_login = new QLineEdit(centralwidget);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));
        lineEdit_login->setEchoMode(QLineEdit::Normal);
        lineEdit_login->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit_login);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setMinimumSize(QSize(0, 0));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_password->setClearButtonEnabled(true);

        verticalLayout_2->addWidget(lineEdit_password);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        lineEdit_confirm_password = new QLineEdit(centralwidget);
        lineEdit_confirm_password->setObjectName(QString::fromUtf8("lineEdit_confirm_password"));
        lineEdit_confirm_password->setEchoMode(QLineEdit::Password);
        lineEdit_confirm_password->setClearButtonEnabled(true);

        verticalLayout_3->addWidget(lineEdit_confirm_password);


        verticalLayout_4->addLayout(verticalLayout_3);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMouseTracking(true);
        checkBox->setFocusPolicy(Qt::StrongFocus);
        checkBox->setInputMethodHints(Qt::ImhNone);
        checkBox->setChecked(true);

        verticalLayout_4->addWidget(checkBox);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_registrate = new QPushButton(centralwidget);
        pushButton_registrate->setObjectName(QString::fromUtf8("pushButton_registrate"));

        verticalLayout_5->addWidget(pushButton_registrate);

        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        verticalLayout_5->addWidget(pushButton_back);


        verticalLayout_4->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Registration_form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Registration_form);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 21));
        Registration_form->setMenuBar(menubar);
        statusbar = new QStatusBar(Registration_form);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Registration_form->setStatusBar(statusbar);

        retranslateUi(Registration_form);

        QMetaObject::connectSlotsByName(Registration_form);
    } // setupUi

    void retranslateUi(QMainWindow *Registration_form)
    {
        Registration_form->setWindowTitle(QCoreApplication::translate("Registration_form", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Registration_form", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("Registration_form", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("Registration_form", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        checkBox->setText(QCoreApplication::translate("Registration_form", "\321\201\320\276\320\263\320\273\320\260\321\210\320\265\320\275\320\270\320\265", nullptr));
        pushButton_registrate->setText(QCoreApplication::translate("Registration_form", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Registration_form", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration_form: public Ui_Registration_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_FORM_H
