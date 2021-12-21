#ifndef REGISTRATION_FORM_H
#define REGISTRATION_FORM_H

#include <QMainWindow>
#include "QtSql"
#include "QSqlDatabase"
#include "QSqlQuery"

namespace Ui {
class Registration_form;
}

class Registration_form : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registration_form(QSqlDatabase db, QSqlQuery *query, QWidget *parent = nullptr);
    ~Registration_form();
signals:
    void mainWindow();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_registrate_clicked();

private:
    Ui::Registration_form *ui;
     QSqlDatabase db;
    QSqlQuery *query;
};

#endif // REGISTRATION_FORM_H
