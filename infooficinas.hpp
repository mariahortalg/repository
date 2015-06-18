/*
 * infoOficinas.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */

#ifndef INFOOFICINAS_HPP
#define INFOOFICINAS_HPP

#include "oficinas.hpp"

namespace Ui {
class infoOficinas;
}

class infoOficinas : public QDialog
{
    Q_OBJECT

public:
    explicit infoOficinas(QWidget *parent = 0);
    ~infoOficinas();

    pel::Vector<claseOficinas> *v2;

private slots:
    void on_BU_Atras7_2_clicked();

    void on_BU_Salir_clicked();

    void on_anadir_clicked();

    void on_cargar_clicked();

    void on_modificar_clicked();

private:
    Ui::infoOficinas *ui;
    int row;

};
#endif // INFOOFICINAS_HPP

