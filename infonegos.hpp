/*
 * InfoNegos.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#ifndef INFONEGOS_HPP
#define INFONEGOS_HPP

#include "negos.hpp"
#include "clasenegos.hpp"

namespace Ui {
class InfoNegos;
}

class InfoNegos : public QDialog
{
    Q_OBJECT

public:

    explicit InfoNegos(QWidget *parent = 0);
    ~InfoNegos();

    pel::Vector<claseNegos> *v;

    char nombre;
    claseFecha fecha;
    char origen;
    char destino;
    int numPlazas;
    int IdVuelo;
    char aviso;

private slots:


    void on_BU_Atras7_2_clicked();

    void on_BU_Salir_clicked();

    void on_anadir_clicked();

    void on_cargar_clicked();

    void on_modificar_clicked();


private:

    Ui::InfoNegos *ui;
//    List<claseLista>listaNoo;
    int row;

};

#endif // INFONEGOS_HPP

