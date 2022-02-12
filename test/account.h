#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QMainWindow>
#include "QtSql"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "changeprofile.h"
#include "tasks.h"

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

    void on_pushButton_about_us_clicked();

    void on_startsolving_clicked();

public slots:
    void update_changes();

private:
    Ui::account *ui;
    QSqlDatabase db;
    QSqlQuery *query;

    changeprofile *newprofile;
    tasks *startsolving;
};

#endif // ACCOUNT_H
