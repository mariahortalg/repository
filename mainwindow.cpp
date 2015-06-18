/*
 * MainWindow.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "infonegos.hpp"
#include "infooficinas.hpp"
#include "infoowners.hpp"
#include "negos.hpp"
#include "owners.hpp"
#include "oficinas.hpp"
#include "vector.h"

MainWindow::MainWindow(QWidget *parent) :  //constructor
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pel::Vector<claseNegos> v;
    pel::Vector<claseOficinas> v2;
    pel::Vector<claseOwners> v3;
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief opens window infonegos.ui
 * @return void
 */
void MainWindow::openNegos()
{
    InfoNegos *n1=new InfoNegos();
    n1->show();
    n1->v = &v;
}

/**
 * @brief opens window infoowners.ui
 * @return void
 */
void MainWindow::openOwners()
{
    infoowners *iow1=new infoowners();
    iow1->show();
    iow1->v3 = &v3;
}

/**
 * @brief opens window infooficinas.ui
 * @return void
 */
void MainWindow::openOficinas()
{
    infoOficinas *iof1=new infoOficinas();
    iof1->show();
    iof1->v2 = &v2;
}

