#include "changeprofile.h"
#include "ui_changeprofile.h"
#include "QFileDialog"
#include "QDir"
#include "QDebug"
#include "QFile"

QFile* photo;
QVariant id_user;

changeprofile::changeprofile(QSqlDatabase db, QSqlQuery *query, QVariant id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::changeprofile)
{
    ui->setupUi(this);
    this->db = db;
    if(!this->db.open()){
        qDebug() << "Not conected";
    } else{
        qDebug() << "Conected";
    }
    this->query = query;
    id_user = id;
    query->exec("SELECT * FROM users");
    while (query->next()){
        if(query->value(0) == id){
            ui->lineEdit_newlogin->setPlaceholderText(query->value(1).toString());
            break;
        }
    }
}

changeprofile::~changeprofile()
{
    delete ui;
}

void changeprofile::on_pushButton_choose_file_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Открыть файл", QDir::homePath());
    qDebug() << file_name;
    photo = new QFile(file_name);

}


void changeprofile::on_pushButton_save_changes_clicked()
{
    if (!photo->open(QIODevice::ReadOnly)) qDebug() << "Error with openning file";
    QByteArray in = photo->readAll();

    query->exec("SELECT * FROM users");
    while (query->next()){
        if(query->value(0) == id_user){
            int id = query->value(0).toInt();
            QString login = query->value(1).toString();
            QString password = query->value(2).toString();
            query = new QSqlQuery(db);
            query->prepare("INSERT INTO users (id, login, password, avatar) VALUES (:id, :login, :password, :avatar)");
            query->bindValue(":id", id);
            query->bindValue(":login", login);
            query->bindValue(":password",password);
            query->bindValue(":avatar", in);
            if (!query->exec()){
                qDebug()<< "Error load file" << query->lastError();
            }
            break;
        }
    }

  // query->exec("UPDATE users SET avatar = " + QString::fromStdString(in.toStdString()) + " WHERE id = " + QString::number(id_user.toInt()));
}

