/*
 * InfoNegos.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "infonegos.hpp"
#include "ui_infonegos.h"
#include <QDebug>
#include <qstring.h>

InfoNegos::InfoNegos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoNegos)
{
    ui->setupUi(this);
}

InfoNegos::~InfoNegos()
{
    delete ui;
}


/**
 * @brief function to save nego into the list
 * @return void
 */
void InfoNegos::on_BU_Atras7_2_clicked()    //guardar
{
    //listaNoo.writeToFile("proyecto.txt");
    v->writeToFile("proyecto.txt");
}

/**
 * @brief function to close window ui
 * @return void
 */
void InfoNegos::on_BU_Salir_clicked()       //salir
{
    close();
}


/**
 * @brief adds the information of InfoNegos to the list
 * @return void
 */
void InfoNegos::on_anadir_clicked()         //añadir
{
    claseFecha fe;
    claseNegos n;

    fe.setDia(ui->dateEdit->date().day());
    fe.setMes(ui->dateEdit->date().month());
    fe.setAnho(ui->dateEdit->date().year());

    n.setNombre(ui->lineEdit->text().toLocal8Bit().data());
    n.setFecha(fe);
    n.setAviso(ui->lineEdit_6->text().toLocal8Bit().data());
    n.setDestino(ui->lineEdit_5->text().toLocal8Bit().data());
    n.setIdVuelo(ui->lineEdit_3->text().toInt());
    n.setOrigen(ui->lineEdit_4->text().toLocal8Bit().data());
    n.setDestino(ui->lineEdit_5->text().toLocal8Bit().data());
    n.setNumPlazas(ui->spinBox->text().toInt());


    v->pushBack(n);

    ui->listWidgetNegos->clear();
    for (std::size_t i = 0; i < v->size(); ++i)
        ui->listWidgetNegos->addItem(QString("NOMBRE: %1  || ORIGEN: %2 - DESTINO: %3").arg(v->at(i).getNombre().c_str()).arg(v->at(i).getOrigen().c_str()).arg(v->at(i).getDestino().c_str()));


}


/**
 * @brief loads the file proyecto.txt
 * @return void
 */
void InfoNegos::on_cargar_clicked()         //cargar
{
    v->readFromFile("proyecto.txt");
    for (std::size_t i = 0; i < v->size(); ++i)
        ui->listWidgetNegos->addItem(QString("NOMBRE: %1  || ORIGEN: %2 - DESTINO: %3").arg(v->at(i).getNombre().c_str()).arg(v->at(i).getOrigen().c_str()).arg(v->at(i).getDestino().c_str()));

}


/**
 * @brief changes the information from InfoNegos
 * @return void
 */
void InfoNegos::on_modificar_clicked()      //modificar
{
    if(!v->empty()){

        row = ui->listWidgetNegos->currentRow();

        claseNegos *negoMod = &v->at(row);

        ui->lineEdit->setText(negoMod->getNombre().c_str());
        ui->lineEdit_3->setText(std::to_string(negoMod->getIdVuelo()).c_str());
        ui->lineEdit_4->setText(negoMod->getOrigen().c_str());
        ui->lineEdit_5->setText(negoMod->getDestino().c_str());
        ui->lineEdit_6->setText(negoMod->getAviso().c_str());

        ui->spinBox->setValue(negoMod->getNumPlazas());

        QDate d;
        d.setDate(negoMod->fecha.getAnho(), negoMod->fecha.getMes(), negoMod->fecha.getDia());
        ui->dateEdit->setDate(d);

        v->erase(v->begin() + row);
    }
}
