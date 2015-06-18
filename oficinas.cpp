/*
 * Oficinas.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "oficinas.hpp"
#include "ui_oficinas.h"
#include "infooficinas.hpp"

Oficinas::Oficinas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Oficinas)
{
    ui->setupUi(this);
}

Oficinas::~Oficinas()
{
    delete ui;
}
