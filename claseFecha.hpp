/*
 * claseFecha.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */

#ifndef CLASEFECHA_HPP
#define CLASEFECHA_HPP

#include <cstddef>

class claseFecha
{
public:
    claseFecha();
    ~claseFecha();

    claseFecha(unsigned int d, unsigned int m, int a);

    unsigned int getDia(); //Nos devuelve el día
    unsigned int getMes(); //Nos devuelve el mes
    int getAnho(); //Nos devuelve el año
    void setDia(int d);
    void setMes(int m);
    void setAnho (int a);

    int dia;
    int mes;
    int anio;

};

#endif // CLASEFECHA_HPP
