#include "registration_form.h"
#include "ui_registration_form.h"
#include "QMessageBox"

int count = 1;

Registration_form::Registration_form(QSqlDatabase db, QSqlQuery *query, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registration_form)
{
    ui->setupUi(this);
    this->db = db;
    if(!this->db.open()){
        qDebug() << "Not conected";
    } else{
        qDebug() << "Conected";
    }
}

Registration_form::~Registration_form()
{
    delete ui;
}

void Registration_form::on_pushButton_back_clicked()
{
    this->close();
    emit mainWindow();
}


void Registration_form::on_pushButton_registrate_clicked()
{
    query = new QSqlQuery(db);
    if(ui->checkBox->isChecked() && ui->lineEdit_login->text() != "" && ui->lineEdit_password->text()!= "" && ui->lineEdit_confirm_password->text()!= ""){
        if(ui->lineEdit_password->text()!=  ui->lineEdit_confirm_password->text()){
            QMessageBox::about(this, "Ошибка", "Пароли не совпадают");
        } else{
            query->prepare("INSERT INTO users (id, login, password) VALUES (:id, :login, :password)");
            query->bindValue(":id", count);
            query->bindValue(":login", ui->lineEdit_login->text());
            query->bindValue(":password", ui->lineEdit_password->text());
            qDebug() << sizeof(count) << " " << sizeof(ui->lineEdit_login->text()) << " " << sizeof(ui->lineEdit_password->text()) << " " << ui->lineEdit_password->text();

            if(!query->exec()){
                   qDebug() << "err";
               } else{
                   qDebug() << "ok";
               }
             count++;
        }
    } else{
        QMessageBox::about(this, "Ошибка", "Заполните все поля");
    }
}

