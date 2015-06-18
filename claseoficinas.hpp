/*
 * claseOficinas.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#ifndef CLASEOFICINAS_H
#define CLASEOFICINAS_H


#include <iostream>
#include <cstddef>
#include <sstream>

class claseOficinas
{
public:

    claseOficinas();
    ~claseOficinas();

    std::string nombre;
    std::string pais;
    std::string continente;
    int idVuelo;
    int peticiones;
    int plazas;
    std::string observacion;



    std::string getNombre() const;
    void setNombre(std::string value);

    std::string getPais() const;
    void setPais(std::string value);

    std::string getContinente() const;
    void setContinente(std::string value);

    int getIdVuelo() const;
    void setIdVuelo(int value);

    int getPeticiones() const;
    void setPeticiones(int value);

    int getPlazas() const;
    void setPlazas(int value);

    std::string getObservacion() const;
    void setObservacion(std::string value);

    void writeToFile(std::ostream *f);
    void readFromFile(std::istream *f);
};

#endif // CLASEOFICINAS_H
