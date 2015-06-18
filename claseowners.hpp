/*
 * claseOwners.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#ifndef CLASEOWNERS_HPP
#define CLASEOWNERS_HPP

#include <iostream>
#include <cstddef>
#include <sstream>
#include "vector.h"

class claseOwners
{
public:
    claseOwners();
    ~claseOwners();

    std::string nombre;
    int idOwner;
    std::string localizacion;
    std::string pais;
    std::string continente;
    std::string observacion;

    std::string getNombre() const;
    void setNombre(const std::string &value);

    int getIdOwner() const;
    void setIdOwner(int value);

    std::string getLocalizacion() const;
    void setLocalizacion(const std::string &value);

    std::string getPais() const;
    void setPais(const std::string &value);

    std::string getContinente() const;
    void setContinente(const std::string &value);

    std::string getObservacion() const;
    void setObservacion(const std::string &value);

    void writeToFile(std::ostream *f);
    void readFromFile(std::istream *f);
};


#endif // CLASEOWNERS_HPP
