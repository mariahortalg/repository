/*
 * claseNegos.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "clasenegos.hpp"

/**
 * @brief claseNegos' constructor
 */
claseNegos::claseNegos()
{

}

/**
 * @brief claseNegos' destructor
 */
claseNegos::~claseNegos()
{

}

/**
 * @brief gets destino
 * @return string destino
 */
std::string claseNegos::getDestino() const
{
    return destino;
}

/**
 * @brief sets destino
 * @param string value
 * @return void
 */
void claseNegos::setDestino(std::string value)
{
    destino = value;
}

/**
 * @brief gets aviso
 * @return string aviso
 */
std::string claseNegos::getAviso() const
{
    return aviso;
}


/**
 * @brief sets aviso
 * @param string value
 * @return void
 */
void claseNegos::setAviso(std::string value)
{
    aviso = value;
}


/**
 * @brief gets nombre
 * @return string nombre
 */
std::string claseNegos::getNombre() const
{
    return nombre;
}


/**
 * @brief sets nombre
 * @param string value
 * @return void
 */
void claseNegos::setNombre(std::string value)
{
    nombre = value;
}


/**
 * @brief gets origen
 * @return string origen
 */
std::string claseNegos::getOrigen() const
{
    return origen;
}


/**
 * @brief sets origen
 * @param string value
 * @return void
 */
void claseNegos::setOrigen(std::string value)
{
    origen = value;
}


/**
 * @briefgets idVuelo
 * @return int idVuelo
 */
int claseNegos::getIdVuelo() const
{
    return IdVuelo;
}


/**
 * @brief sets idVuelo
 * @param int value
 * @return void
 */
void claseNegos::setIdVuelo(int value)
{
    IdVuelo = value;
}


/**
 * @brief gets numPlazas
 * @return int numPlazas
 */
int claseNegos::getNumPlazas() const
{
    return numPlazas;
}


/**
 * @brief sets numPlazas
 * @param int value
 * @return void
 */
void claseNegos::setNumPlazas(int value)
{
    numPlazas = value;
}


/**
 * @brief gets fecha
 * @return claseFecha fecha
 */
claseFecha claseNegos::getFecha() const
{
    return fecha;
}


/**
 * @brief sets fecha
 * @param claseFecha pfecha
 * @return void
 */
void claseNegos::setFecha(claseFecha pfecha)
{
    this->fecha = pfecha;
}


/**
 * @brief write to file claseNegos
 * @param ostream *f
 * @return void
 */
void claseNegos::writeToFile(std::ostream *f)
{
    *f << nombre << '\n' << destino << '\n' << origen
       << '\n' << aviso << '\n' << numPlazas << '\n'
       << IdVuelo << '\n' << fecha.getDia() << '\n'
       << fecha.getMes() << '\n' << fecha.getAnho() << '\n';
}


/**
 * @brief read from file claseNegos
 * @param istream *f
 * @return void
 */
void claseNegos::readFromFile(std::istream *f)
{
    std::string buffer;
    claseFecha fecha;
    int bufferNum;
    std::getline(*f, nombre);
    std::getline(*f, destino);
    std::getline(*f, origen);
    std::getline(*f, aviso);
    std::getline(*f, buffer);
    std::istringstream(buffer) >> numPlazas;
    std::getline(*f, buffer);
    std::istringstream(buffer) >> IdVuelo;

    std::getline(*f, buffer);
    std::istringstream(buffer) >> bufferNum;
    fecha.setDia(bufferNum);
    std::getline(*f, buffer);
    std::istringstream(buffer) >> bufferNum;
    fecha.setMes(bufferNum);
    std::getline(*f, buffer);
    std::istringstream(buffer) >> bufferNum;
    fecha.setAnho(bufferNum);
}

