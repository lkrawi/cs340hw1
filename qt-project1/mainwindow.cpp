#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
   ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//! The number 1 printing button.
void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton1 " << std::endl;
}




//! The number 2 printing button.
void MainWindow::on_pushButton_2_clicked()
{
     std::cout << "pushbutton2 clicked " << std::endl;
}

//!The number 3 printing button.
void MainWindow::on_pushButton_3_released()
{
    std::cout << "button 3 released" << std::endl;
}
