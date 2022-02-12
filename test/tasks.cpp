#include "tasks.h"
#include "ui_tasks.h"
#include "QPushButton"
#include "QDebug"
#include "QWidget"
#include "QGraphicsOpacityEffect"
#include "QScrollArea"

tasks::tasks(QSqlDatabase db, QSqlQuery *query, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tasks)
{
    ui->setupUi(this);
    this->setStyleSheet("color: white; background-color: #022140; font: 18px Roboto;");
    ui->label_title->setStyleSheet("min-height: auto; min-width: auto; margin-bottom: 8px;");
    ui->label_text->setStyleSheet("min-height: auto; min-width: auto; margin: 10px 0");
    ui->comboBox_task_types->setStyleSheet("background-color: #98A9C9; border-style: outset; border-width: 2px; border-radius: 4px; border-color: #E9AA08; padding: 4px 2px; min-width: auto; margin-top: 4px;");
    ui->verticalLayout_2->setContentsMargins(10, 10, 10, 10);
    QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect;
    effect->setOpacity(0);
    ui->scrollArea_task->setGraphicsEffect(effect);

    this->db = db;
    if(!this->db.open()){
        qDebug() << "Not conected";
    } else{
        qDebug() << "Conected";
    }
    this->query = query;

    load_task_types();
}

tasks::~tasks()
{
    delete ui;
}

void tasks::load_task_types() {
    query->exec("SELECT * FROM tasks");
    while(query->next()){
        qDebug() << ui->comboBox_task_types->view();
        if(ui->comboBox_task_types->findText(query->value(1).toString()) == -1){
            ui->comboBox_task_types->addItem(query->value(1).toString());
        }

    }
}

void tasks::tasks_clicked(){
    qDebug() << 1;
    newsolving->show();
    this->close();
}

void tasks::on_comboBox_task_types_textActivated(const QString &arg1) {
    ui->scrollArea_task->setStyleSheet("margin-top: 10px; border-width: 3px; min-width: auto;");
    QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect;
    effect->setOpacity(1);
    ui->scrollArea_task->setGraphicsEffect(effect);

    newsolving = new solving(db, query, arg1);
    connect(newsolving, &solving::tasks, this, &tasks::show);
    QWidget* container = new QWidget();
    ui->scrollArea_task->setWidget(container);
    QVBoxLayout* layout = new QVBoxLayout(container);
    if(!query->exec("SELECT * FROM tasks"))
        qDebug() << "err";
    while(query->next()) {
        if(query->value(1).toString() == arg1) {
            QPushButton* button_task = new QPushButton(query->value(2).toString(), container);
            connect(button_task,SIGNAL(clicked()), this, SLOT(tasks_clicked()));
            button_task->setStyleSheet("background-color: #98A9C9; font-size: 10px; margin: 8px; border-style: outset; border-width: 2px; border-radius: 4px; border-color: #E9AA08;");
            layout->addWidget(button_task);

        }
    }

}




