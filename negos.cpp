/*
 * Negos.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "negos.hpp"
#include "ui_negos.h"
#include "infonegos.hpp"


Negos::Negos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Negos)
{
    ui->setupUi(this);
}

Negos::~Negos()
{
    delete ui;
}

