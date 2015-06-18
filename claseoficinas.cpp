/*
 * claseOficinas.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "claseoficinas.hpp"

/**
 * @brief claseOficinas' constructor
 */
claseOficinas::claseOficinas()
{

}

/**
 * @brief claseOficinas' destructor
 */
claseOficinas::~claseOficinas()
{

}


/**
 * @brief gets observacion
 * @return string observacion
 */
std::string claseOficinas::getObservacion() const
{
    return observacion;
}


/**
 * @brief sets observaacion
 * @param string value
 * @return void
 */
void claseOficinas::setObservacion(std::string value)
{
    observacion = value;
}


/**
 * @brief gets plazas
 * @return int plazas
 */
int claseOficinas::getPlazas() const
{
    return plazas;
}


/**
 * @brief sets plazas
 * @param int value
 * @return void
 */
void claseOficinas::setPlazas(int value)
{
    plazas = value;
}


/**
 * @brief gets peticiones
 * @return int peticiones
 */
int claseOficinas::getPeticiones() const
{
    return peticiones;
}


/**
 * @brief sets peticiones
 * @param int value
 * @return void
 */
void claseOficinas::setPeticiones(int value)
{
    peticiones = value;
}


/**
 * @brief gets idVuelo
 * @return int idVuelo
 */
int claseOficinas::getIdVuelo() const
{
    return idVuelo;
}


/**
 * @brief sets idVuelo
 * @param int value
 * @return void
 */
void claseOficinas::setIdVuelo(int value)
{
    idVuelo = value;
}


/**
 * @brief gets continente
 * @return string continente
 */
std::string claseOficinas::getContinente() const
{
    return continente;
}


/**
 * @brief sets continente
 * @param string value
 * @return void
 */
void claseOficinas::setContinente(std::string value)
{
    continente = value;
}


/**
 * @brief gets pais
 * @return string pais
 */
std::string claseOficinas::getPais() const
{
    return pais;
}


/**
 * @brief sets pais
 * @param string value
 * @return void
 */
void claseOficinas::setPais(std::string value)
{
    pais = value;
}


/**
 * @brief gets nombre
 * @return string nombre
 */
std::string claseOficinas::getNombre() const
{
    return nombre;
}


/**
 * @brief sets nombre
 * @param string value
 * @return void
 */
void claseOficinas::setNombre(std::string value)
{
    nombre = value;
}



/**
 * @brief write to file claseOficinas
 * @param ostream *f
 * @return void
 */
void claseOficinas::writeToFile(std::ostream *f)
{
    *f << nombre << '\n'
       << pais << '\n'
       << continente << '\n'
       << idVuelo << '\n'
       << peticiones << '\n'
       << plazas << '\n'
       << observacion << '\n';
}


/**
 * @brief read from file claseOficinas
 * @param istream *f
 * @return void
 */
void claseOficinas::readFromFile(std::istream *f)
{
    std::string tmpString;

    std::getline(*f, nombre);
    std::getline(*f, pais);
    std::getline(*f, continente);
    std::getline(*f, tmpString);
    std::istringstream(tmpString) >> idVuelo;
    std::getline(*f, tmpString);
    std::istringstream(tmpString) >> peticiones;
    std::getline(*f, tmpString);
    std::istringstream(tmpString) >> plazas;
    std::getline(*f, observacion);


}
