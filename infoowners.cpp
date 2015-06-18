/*
 * infoowners.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "infoowners.hpp"
#include "ui_infoowners.h"


infoowners::infoowners(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoowners)
{
    ui->setupUi(this);
}

infoowners::~infoowners()
{
    delete ui;
}

/**
 * @brief function to save owners into the list
 * @return void
 */
void infoowners::on_BU_Atras7_2_clicked()   //GUARDAR
{
    v3->writeToFile("proyecto.txt");
}

/**
 * @brief function to close the window ui
 * @return void
 */
void infoowners::on_BU_Salir_clicked()
{
    close();
}

/**
 * @brief adds the information of infoowners to the list
 * @return void
 */
void infoowners::on_anadir_clicked()
{
    claseOwners ow;

    ow.setNombre(ui->lineEdit->text().toLocal8Bit().data());
    ow.setIdOwner(ui->lineEdit_2->text().toInt());
    ow.setLocalizacion(ui->lineEdit_3->text().toLocal8Bit().data());
    ow.setPais(ui->lineEdit_4->text().toLocal8Bit().data());
    ow.setContinente(ui->lineEdit_5->text().toLocal8Bit().data());
    ow.setObservacion(ui->lineEdit_6->text().toLocal8Bit().data());

    v3->pushBack(ow);

    ui->listWidgetOwners->clear();

    for(std::size_t i= 0;i < v3->size(); ++i)
        ui->listWidgetOwners->addItem(QString("NOMBRE: %1 --- PAÍS: %2 --- LOCALIZACIÓN: %3").arg(v3->at(i).getNombre().c_str()).arg(v3->at(i).getPais().c_str()).arg(v3->at(i).getLocalizacion().c_str()));

}


/**
 * @brief loads file proyecto.txt
 * @return void
 */
void infoowners::on_cargar_clicked()
{
    v3->readFromFile("proyecto.txt");

    for(std::size_t i= 0;i < v3->size(); ++i)
        ui->listWidgetOwners->addItem(QString("NOMBRE: %1 --- PAÍS: %2 --- LOCALIZACIÓN: %3").arg(v3->at(i).getNombre().c_str()).arg(v3->at(i).getPais().c_str()).arg(v3->at(i).getLocalizacion().c_str()));

}


/**
 * @brief changes the information of infoowners
 * @return void
 */
void infoowners::on_modificar_clicked()
{
    if(!v3->empty())
    {
        row = ui->listWidgetOwners->currentRow();
        claseOwners *own = &v3->at(row);

        ui->lineEdit->setText(own->getNombre().c_str());
        ui->lineEdit_2->setText(std::to_string(own->getIdOwner()).c_str());
        ui->lineEdit_3->setText(own->getLocalizacion().c_str());
        ui->lineEdit_4->setText(own->getPais().c_str());
        ui->lineEdit_5->setText(own->getContinente().c_str());
        ui->lineEdit_6->setText(own->getObservacion().c_str());

        v3->erase(v3->begin() + row);
    }
}
