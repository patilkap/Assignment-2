#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)  {ui->setupUi(this);}

    QButtonGroup *calc = new QButtonGroup;
    QObject::connect(calc, SIGNAL(button_pressed()), this, SLOT(compute()))
    QObject::connect(ui->hw1box, SIGNAL(valueChanged(double)),hw1slider,SLOT(setValue(int)) )
    QObject::connect(horizontalSlider1,SIGNAL(valueChanged(int)),spinBox1,SLOT(setValue(double)) )

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gethw1(){
    this->hw1 = ui->hw1box->value();
}

void MainWindow::sethw1(){
    ui->hw1box->setValue(ui->hw1slider->tickInterval());

}
