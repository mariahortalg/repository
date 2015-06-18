/*
 * Owners.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "ui_owners.h"
#include "infoowners.hpp"
#include "owners.hpp"


Owners::Owners(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Owners)
{
    ui->setupUi(this);
}

Owners::~Owners()
{
    delete ui;
}
