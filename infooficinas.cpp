/*
 * infoOficinas.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "infooficinas.hpp"
#include "ui_infooficinas.h"


infoOficinas::infoOficinas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoOficinas)
{
    ui->setupUi(this);
}

infoOficinas::~infoOficinas()
{
    delete ui;
}

/**
 * @brief function to save oficinas into the list.
 * @return void
 */
void infoOficinas::on_BU_Atras7_2_clicked() //GUARDAR
{
    v2->writeToFile("proyecto.txt");
}

/**
 * @brief function to close the window ui
 * @return void
 */
void infoOficinas::on_BU_Salir_clicked()
{
    close();
}


/**
 * @brief adds the information of infoOficinas to the list
 * @return void
 */
void infoOficinas::on_anadir_clicked()
{
    claseOficinas o;

    o.setNombre(ui->lineEdit->text().toLocal8Bit().data());
    o.setPais(ui->lineEdit_2->text().toLocal8Bit().data());
    o.setContinente(ui->lineEdit_3->text().toLocal8Bit().data());
    o.setIdVuelo(ui->lineEdit_4->text().toInt());
    o.setPeticiones(ui->lineEdit_5->text().toInt());
    o.setPlazas(ui->spinBox->text().toInt());
    o.setObservacion(ui->lineEdit_6->text().toLocal8Bit().data());

    v2->pushBack(o);

    ui->listWidgetOficinas->clear();

    for(std::size_t i= 0;i < v2->size(); ++i)
        ui->listWidgetOficinas->addItem(QString("NOMBRE: %1  || PAÍS: %2").arg(v2->at(i).getNombre().c_str()).arg(v2->at(i).getPais().c_str()));

}


/**
 * @brief loads the file proyect.txt
 * @return void
 */
void infoOficinas::on_cargar_clicked()
{
    v2->readFromFile("proyecto.txt");

    for(std::size_t i= 0;i < v2->size(); ++i)
        ui->listWidgetOficinas->addItem(QString("NOMBRE: %1  || PAÍS: %2").arg(v2->at(i).getNombre().c_str()).arg(v2->at(i).getPais().c_str()));
}


/**
 * @brief changes the information of infoOficinas
 * @return void
 */
void infoOficinas::on_modificar_clicked()
{
    if(!v2->empty())
    {
        row = ui->listWidgetOficinas->currentRow();

        claseOficinas *ofi = &v2->at(row);

        ui->lineEdit->setText(ofi->getNombre().c_str());
        ui->lineEdit_2->setText(ofi->getPais().c_str());
        ui->lineEdit_3->setText(ofi->getContinente().c_str());
        ui->lineEdit_4->setText(std::to_string(ofi->getIdVuelo()).c_str());
        ui->lineEdit_5->setText(std::to_string(ofi->getPeticiones()).c_str());
        ui->lineEdit_6->setText(ofi->getObservacion().c_str());

        ui->spinBox->setValue(ofi->getPlazas());

        v2->erase(v2->begin() + row);
    }
}
