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
    ui->resultLabel->setText("یک عدد انتخاب و شانستو امتحان کن");

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
        ui->checkButton->setDisabled(true);
    }
    else {
        ui->resultLabel->setText("اووپس موفق نشدی دوباره امتحان کن");
    }
}

void Widget::on_retryButton_clicked()
{
    ui->resultLabel->setText("یک عدد انتخاب و امتحان کن ");
    ui->spinBox->setValue(0);
    ui->checkButton->setEnabled(true);
    srand(time(0));
    this->number = rand()%10;
    qDebug()<<this->number;
}
