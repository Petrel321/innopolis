/********************************************************************************
** Form generated from reading UI file 'account.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_H
#define UI_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_account
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *user_avatar;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPushButton *pushButton_change_profile;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_about_us;
    QPushButton *startsolving;
    QPushButton *pushButton_exit;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *account)
    {
        if (account->objectName().isEmpty())
            account->setObjectName(QString::fromUtf8("account"));
        account->resize(400, 600);
        centralwidget = new QWidget(account);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        user_avatar = new QLabel(centralwidget);
        user_avatar->setObjectName(QString::fromUtf8("user_avatar"));
        user_avatar->setMinimumSize(QSize(50, 0));
        user_avatar->setMaximumSize(QSize(80, 80));
        user_avatar->setAutoFillBackground(false);
        user_avatar->setMidLineWidth(0);
        user_avatar->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/\320\277\321\200\320\276\320\263\320\260 \320\264\320\273\321\217 \320\270\320\275\320\275\320\276\320\277\320\276\320\273\320\270\321\201\320\260/\320\264\320\270\320\267\320\260\320\271\320\275/\320\260\320\262\320\260\321\202\320\260\321\200\320\272\320\260.jpg")));
        user_avatar->setScaledContents(true);
        user_avatar->setAlignment(Qt::AlignCenter);
        user_avatar->setWordWrap(false);
        user_avatar->setMargin(0);

        horizontalLayout->addWidget(user_avatar);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(10, -1, -1, -1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        pushButton_change_profile = new QPushButton(centralwidget);
        pushButton_change_profile->setObjectName(QString::fromUtf8("pushButton_change_profile"));
        pushButton_change_profile->setEnabled(true);
        pushButton_change_profile->setMaximumSize(QSize(16777215, 16777215));
        pushButton_change_profile->setLayoutDirection(Qt::LeftToRight);
        pushButton_change_profile->setAutoDefault(false);
        pushButton_change_profile->setFlat(false);

        verticalLayout->addWidget(pushButton_change_profile);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 300));
        label_3->setMaximumSize(QSize(150, 340));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, -1, -1, -1);
        pushButton_about_us = new QPushButton(centralwidget);
        pushButton_about_us->setObjectName(QString::fromUtf8("pushButton_about_us"));

        verticalLayout_3->addWidget(pushButton_about_us);

        startsolving = new QPushButton(centralwidget);
        startsolving->setObjectName(QString::fromUtf8("startsolving"));

        verticalLayout_3->addWidget(startsolving);

        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));

        verticalLayout_3->addWidget(pushButton_exit);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        account->setCentralWidget(centralwidget);
        menubar = new QMenuBar(account);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 21));
        account->setMenuBar(menubar);

        retranslateUi(account);

        pushButton_change_profile->setDefault(false);


        QMetaObject::connectSlotsByName(account);
    } // setupUi

    void retranslateUi(QMainWindow *account)
    {
        account->setWindowTitle(QCoreApplication::translate("account", "MainWindow", nullptr));
        user_avatar->setText(QString());
        label_2->setText(QCoreApplication::translate("account", "login", nullptr));
        pushButton_change_profile->setText(QCoreApplication::translate("account", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("account", "TextLabel", nullptr));
        pushButton_about_us->setText(QCoreApplication::translate("account", "\320\236 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270", nullptr));
        startsolving->setText(QCoreApplication::translate("account", "\320\237\321\200\320\270\321\201\321\202\321\203\320\277\320\270\321\202\321\214 \320\272 \321\200\320\265\321\210\320\265\320\275\320\270\321\216", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("account", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class account: public Ui_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_H
