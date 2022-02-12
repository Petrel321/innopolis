#include "changeprofile.h"
#include "ui_changeprofile.h"
#include "QFileDialog"
#include "QDir"
#include "QDebug"
#include "QFile"

QFile* photo = nullptr;
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
    if(photo != nullptr){
        if (!photo->open(QIODevice::ReadOnly)) qDebug() << "Error with openning file";

        QByteArray in = photo->readAll();

        query = new QSqlQuery(db);
        qDebug() << id_user.toString();
        query->prepare("UPDATE users SET avatar = :avatar WHERE id = :id");
        query->bindValue(":avatar", in);
        query->bindValue(":id", id_user);
        if (!query->exec()){
            qDebug()<< "Error load file" << query->lastError();
        }
        photo = nullptr;


    }
    if(ui->lineEdit_newlogin->text() != ""){
        query->prepare("UPDATE users SET login = :login WHERE id = :id");
        query->bindValue(":login", ui->lineEdit_newlogin->text());
        query->bindValue(":id", id_user);
        if (!query->exec()){
            qDebug()<< "Error load file" << query->lastError();
        }
        ui->lineEdit_newlogin->setPlaceholderText(ui->lineEdit_newlogin->text());
    }
    on_pushButton_exit_clicked();

}



void changeprofile::on_pushButton_exit_clicked()
{
    ui->lineEdit_newlogin->clear();

    emit account();
    this->close();
}

