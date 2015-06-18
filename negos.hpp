/*
 * negos.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#ifndef NEGOS_HPP
#define NEGOS_HPP

#include <QDialog>
#include <string>
#include "vector.h"
#include "clasenegos.hpp"

namespace Ui {
class Negos;
}

class Negos : public QDialog
{
    Q_OBJECT

public:

    explicit Negos(QWidget *parent = 0);
    pel::Vector <claseNegos> *v;
    ~Negos();

private:
    Ui::Negos *ui;

private slots:

};

#endif // NEGOS_HPP
