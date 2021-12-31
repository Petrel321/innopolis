#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "registration_form.h"
#include "account.h"
#include "QtSql"
#include "QSqlDatabase"
#include "QSqlQuery"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    Registration_form *registration;
    account *acc;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery *query;
};
#endif // MAINWINDOW_H
