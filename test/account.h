#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QMainWindow>
#include "QtSql"
#include "QSqlDatabase"
#include "QSqlQuery"
#include"changeprofile.h"

namespace Ui {
class account;
}

class account : public QMainWindow
{
    Q_OBJECT

public:
    explicit account(QSqlDatabase db, QSqlQuery *query, QVariant id, QWidget *parent = nullptr);
    ~account();
signals:
    void mainWindow();
private slots:
    void on_pushButton_exit_clicked();

    void on_pushButton_change_profile_clicked();

private:
    Ui::account *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    changeprofile *newprofile;
};

#endif // ACCOUNT_H
