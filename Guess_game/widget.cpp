#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <random>
#include <time.h>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    srand(time(0));
    this->number = rand()%10;
    qDebug()<<this->number;

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_checkButton_clicked()
{
    if(ui->spinBox->text().toInt() == this->number){

        qDebug()<<"well done";
        ui->resultLabel->setText("برنده شدی بره کلا");
    }
}

void Widget::on_retryButton_clicked()
{
    ui->resultLabel->setText("دوباره سعی کن");
    ui->spinBox->setValue(0);
    srand(time(0));
    this->number = rand()%10;
    qDebug()<<this->number;
}
