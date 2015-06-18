/*
 * oficinas.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#ifndef OFICINAS_HPP
#define OFICINAS_HPP

#include <QDialog>
#include <string>
#include "claseoficinas.hpp"
#include "claseFecha.hpp"
#include "vector.h"




namespace Ui {
class Oficinas;
}

class Oficinas : public QDialog
{
    Q_OBJECT

public:
    explicit Oficinas(QWidget *parent = 0);
    ~Oficinas();

private:
    Ui::Oficinas *ui;

private slots:


};

#endif // OFICINAS_HPP
