#ifndef SOLVING_H
#define SOLVING_H

#include <QMainWindow>
#include "QtSql"
#include "QSqlDatabase"
#include "QSqlQuery"


namespace Ui {
class solving;
}

class solving : public QMainWindow
{
    Q_OBJECT

public:
    explicit solving(QSqlDatabase db, QSqlQuery *query, QString type, QWidget *parent = nullptr);
    ~solving();
signals:
    void tasks();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void formLayout_changed(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::solving *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QString type;
};

#endif // SOLVING_H
