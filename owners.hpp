/*
 * Owners.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#ifndef OWNERS_HPP
#define OWNERS_HPP

#include <QDialog>
#include <string>

namespace Ui {
class Owners;
}

class Owners : public QDialog
{
    Q_OBJECT

public:
    explicit Owners(QWidget *parent = 0);
    ~Owners();

private:
    Ui::Owners *ui;

private slots:

};

#endif // OWNERS_HPP
