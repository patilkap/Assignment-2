#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)  {

        ui->setupUi(this);

    //QButtonGroup *calc = new QButtonGroup;
    QObject::connect(ui->Calculate, SIGNAL(pressed()), this, SLOT(compute()));
    QObject::connect(ui->A, SIGNAL(clicked()), this, SLOT(aclicked()));
    QObject::connect(ui->B, SIGNAL(clicked()), this, SLOT(bclicked()));
}
    MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gethw1(){
     this->hw1 = ui->hw1box->value();
}
void MainWindow::gethw2(){
     this->hw2 = ui->hw2box->value();
}

void MainWindow::compute(){
    double hwsum = hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7;
    double hwavg = hwsum/7;
    double total;
   if(methoda){
    total = (hwavg*0.25)+(mt1*0.2)+(mt2*0.2)+(fnl*0.35);
    total = 2;
   }
   if(methoda==false){
       double mt;
       if(mt1>mt2){mt = mt1;}
       else{mt = mt2;}
       total = (hwavg*0.25)+(mt*0.3)+(fnl*0.44);
       total =5;
   }
    ui->GradeTotal->setNum(total);


    return;

}


void MainWindow::on_A_clicked(bool checked)
{
   if(checked) methoda=true;

}

void MainWindow::on_B_clicked(bool checked)
{
    if(checked) methoda=false;
}
