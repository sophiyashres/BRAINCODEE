#include "level1.h"
#include "ui_level1.h"
#include<QPixmap>

level1::level1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level1)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/cascade/Documents/project/braincode-main/questions/raven_a1.png");
    ui->label_a1->setPixmap(pix);
}

level1::~level1()
{
    delete ui;
}
