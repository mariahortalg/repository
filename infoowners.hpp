/*
 * infoowners.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#ifndef INFOOWNERS_HPP
#define INFOOWNERS_HPP

#include "owners.hpp"
#include "vector.h"
#include "claseowners.hpp"

namespace Ui {
class infoowners;
}

class infoowners : public QDialog
{
    Q_OBJECT

public:
    explicit infoowners(QWidget *parent = 0);
    ~infoowners();

    pel::Vector<claseOwners> *v3;

private slots:
    void on_BU_Atras7_2_clicked();
    
    void on_BU_Salir_clicked();
    
    void on_anadir_clicked();

    void on_cargar_clicked();

    void on_modificar_clicked();

private:
    Ui::infoowners *ui;
//    List<claseLista>listaNoo;
    int row;

};

#endif // INFOOWNERS_HPP

