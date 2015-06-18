/*
 * claseFecha.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "clasefecha.hpp"

/**
 * @brief creates an empty constructor of claseFecha
 * @return empty fecha
 */
claseFecha::claseFecha()
{
    this->dia=1;
    this->mes=1;
    this->anio=1;
}


/**
 * @brief clasefecha's destructor
 */
claseFecha::~claseFecha()
{

}


/**
 * @brief creates a full constructor of claseFecha
 * @param unsigned int d
 * @param unsigned int m
 * @param int a
 * @return claseFecha with day, month and year
 */
claseFecha::claseFecha(unsigned int d, unsigned int m, int a)
{
    dia = d;
    mes = m;
    anio = a;
}


/**
 * @brief gets the day
 * @return  unsigned int dia
 */
unsigned int claseFecha::getDia()
{
    return dia;
}


/**
 * @brief gets the month
 * @return unsigned int mes
 */
unsigned int claseFecha::getMes()
{
    return mes;
}


/**
 * @brief gets the year
 * @return int anio
 */
int claseFecha::getAnho()
{
    return anio;
}


/**
 * @brief sets the day
 * @param int d
 * @return void
 */
void claseFecha::setDia(int d)
{
    dia= d;
}


/**
 * @brief sets the month
 * @param int m
 * @return void
 */
void claseFecha::setMes(int m)
{
     mes= m;
}


/**
 * @brief sets the year
 * @param  int a
 * @return void
 */
void claseFecha::setAnho(int a)
{
    anio=a;
}

