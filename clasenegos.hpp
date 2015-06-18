/*
 * claseNegos.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#ifndef CLASENEGOS_HPP
#define CLASENEGOS_HPP


#include <iostream>
#include <sstream>
#include <cstddef>
#include "claseFecha.hpp"

class claseNegos
{

public:

    claseNegos();
    ~claseNegos();

    std::string nombre;
    claseFecha fecha;
    std::string origen;
    std::string destino;
    int numPlazas;
    int IdVuelo;
    std::string aviso;


    claseFecha getFecha() const;
    void setFecha(claseFecha pfecha);

    int getNumPlazas() const;
    void setNumPlazas(int value);

    int getIdVuelo() const;
    void setIdVuelo(int value);

    std::string getOrigen() const;
    void setOrigen(std::string value);

    std::string getNombre() const;
    void setNombre(std::string value);

    std::string getAviso()const;
    void setAviso(std::string value);

    std::string getDestino() const;
    void setDestino(std::string value);

    void writeToFile(std::ostream *f);
    void readFromFile(std::istream *f);
};



#endif // CLASENEGOS_HPP
