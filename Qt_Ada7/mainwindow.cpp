#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setUpAda7();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUpAda7()
{
    adaDisp.open(0x70);
    adaDisp.setBlinkRate(0);
    adaDisp.setBrightness(1);
    adaDisp.writeint(0);
}

void MainWindow::on_dial_valueChanged(int value)
{
    qint16 aux;
    aux = value - 999; // Offset to show negative numbers

    adaDisp.writeint(aux);
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    adaDisp.setBrightness(value);
}
