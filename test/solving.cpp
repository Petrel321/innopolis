#include "solving.h"
#include "ui_solving.h"
#include "QGraphicsDropShadowEffect"
#include "QDebug"
#include "QLabel"
#include "QFormLayout"
#include "QVector"


solving::solving(QSqlDatabase db, QSqlQuery *query, QString type, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::solving)
{
    ui->setupUi(this);
    this->setStyleSheet("color: white; background-color: #022140; font: 18px Roboto;");
    ui->label_type->setStyleSheet("min-height: auto; min-width: auto;");
    ui->label->setStyleSheet("min-height: auto; min-width: auto;");
    ui->label_2->setStyleSheet("min-height: auto; min-width: auto;");
    ui->label_3->setStyleSheet("min-height: auto; min-width: auto;");
    ui->label_5->setStyleSheet("min-height: auto; min-width: auto;");
    ui->lineEdit->setStyleSheet("background-color: #98A9C9; border-style: outset; border-width: 2px; border-radius: 4px; border-color: #E9AA08; padding: 4px 2px; min-width: auto; margin-top: 4px;");
    ui->lineEdit_2->setStyleSheet("background-color: #98A9C9; border-style: outset; border-width: 2px; border-radius: 4px; border-color: #E9AA08; padding: 4px 2px; min-width: auto; margin-top: 4px;");
    ui->pushButton->setStyleSheet("background-color: #E9AA08; border-style: outset; border-radius: 10px; margin: 0 auto; padding: 3px 6px; min-width: auto;");
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setXOffset(2);
    effect->setYOffset(2);
    effect->setColor("#7B4E4E");
    ui->pushButton->setGraphicsEffect(effect);
    ui->verticalLayout_5->setContentsMargins(10, 10, 10, 10);


    this->db = db;
    this->type = type;
    if(!this->db.open()){
        qDebug() << "Not conected";
    } else{
        qDebug() << "Conected";
    }


    ui->label_type->setText(type);
}

solving::~solving()
{
    delete ui;
}

void solving::on_lineEdit_textChanged(const QString &arg1)
{
    formLayout_changed(arg1);
}

void solving::formLayout_changed(const QString &arg1){
    //ui->formLayout = new QFormLayout();
    QWidget* container = new QWidget();
    ui->scrollArea->setWidget(container);
    QFormLayout* layout = new QFormLayout(container);
    for (int i = 0; i < arg1.length(); i++) {
        if(arg1[i] != ' '){
        QLabel* letter = new QLabel(arg1[i], container);
        layout->addRow(letter, new QLineEdit("-1"));
        letter->setStyleSheet("background-color: #98A9C9; border-style: outset; border-width: 2px; border-radius: 4px; border-color: #E9AA08;");
        }
    }
}

void solving::on_pushButton_clicked()
{
    if(this->type == "Выбор кода при неиспользуемых сигналах"){
        QVector<QPair<QString, QString>> alf;
        for (int i = 1; i < ui->scrollArea->widget()->children().size(); i += 2) {


            alf.push_back({ui->scrollArea->widget()->children()[i], ui->scrollArea->widget()->children()[i + 1]});
        }
    }
}

