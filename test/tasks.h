#ifndef TASKS_H
#define TASKS_H

#include <QMainWindow>
#include "QtSql"
#include "QSqlDatabase"
#include "QSqlQuery"
#include "solving.h"

namespace Ui {
class tasks;
}

class tasks : public QMainWindow
{
    Q_OBJECT

public:
    explicit tasks(QSqlDatabase db, QSqlQuery *query, QWidget *parent = nullptr);
    ~tasks();
signals:
    void account();


private slots:
    void load_task_types();

    void tasks_clicked();

    void on_comboBox_task_types_textActivated(const QString &arg1);


private:
    Ui::tasks *ui;
    QSqlDatabase db;
    QSqlQuery *query;

    solving *newsolving;
};

#endif // TASKS_H

