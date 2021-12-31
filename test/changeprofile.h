#ifndef CHANGEPROFILE_H
#define CHANGEPROFILE_H

#include <QMainWindow>
#include "QtSql"
#include "QSqlDatabase"
#include "QSqlQuery"


namespace Ui {
class changeprofile;
}

class changeprofile : public QMainWindow
{
    Q_OBJECT

public:
    explicit changeprofile(QSqlDatabase db, QSqlQuery *query, QVariant id, QWidget *parent = nullptr);
    ~changeprofile();
signals:
    void account();

private slots:
    void on_pushButton_choose_file_clicked();

    void on_pushButton_save_changes_clicked();

private:
    Ui::changeprofile *ui;
    QSqlDatabase db;
    QSqlQuery *query;
};

#endif // CHANGEPROFILE_H
