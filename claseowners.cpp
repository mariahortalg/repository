/*
 * claseOwners.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include "claseowners.hpp"

/**
 * @brief claseOwners' constructor
 */
claseOwners::claseOwners()
{

}

/**
 * @brief claseOwners' destructor
 */
claseOwners::~claseOwners()
{

}

/**
 * @brief gets observacion
 * @return string observacion
 */
std::string claseOwners::getObservacion() const
{
    return observacion;
}


/**
 * @brief sets observacion
 * @param string value
 * @return void
 */
void claseOwners::setObservacion(const std::string &value)
{
    observacion = value;
}


/**
 * @brief gets continente
 * @return string continente
 */
std::string claseOwners::getContinente() const
{
    return continente;
}


/**
 * @brief sets continente
 * @param string value
 * @return void
 */
void claseOwners::setContinente(const std::string &value)
{
    continente = value;
}


/**
 * @brief gets pais
 * @return string pais
 */
std::string claseOwners::getPais() const
{
    return pais;
}


/**
 * @brief sets pais
 * @param string value
 * @return void
 */
void claseOwners::setPais(const std::string &value)
{
    pais = value;
}


/**
 * @brief gets locslizacion
 * @return string localizacion
 */
std::string claseOwners::getLocalizacion() const
{
    return localizacion;
}


/**
 * @brief sets localizacion
 * @param string value
 * @return void
 */
void claseOwners::setLocalizacion(const std::string &value)
{
    localizacion = value;
}


/**
 * @brief gets idOwner
 * @return int idOwner
 */
int claseOwners::getIdOwner() const
{
    return idOwner;
}


/**
 * @brief sets idOwner
 * @param int value
 * @return void
 */
void claseOwners::setIdOwner(int value)
{
    idOwner = value;
}


/**
 * @brief gets nombre
 * @return string nombre
 */
std::string claseOwners::getNombre() const
{
    return nombre;
}


/**
 * @brief sets nombre
 * @param string value
 * @return void
 */
void claseOwners::setNombre(const std::string &value)
{
    nombre = value;
}


/**
 * @brief write to file claseOwners
 * @param ostream +f
 * @return void
 */
void claseOwners::writeToFile(std::ostream *f)
{
    *f << nombre << '\n'
       << idOwner << '\n'
       << localizacion << '\n'
       << pais << '\n'
       << continente << '\n'
       << observacion << '\n';
}


/**
 * @brief read from file claseOwners
 * @param istream *f
 * @return void
 */
void claseOwners::readFromFile(std::istream *f)
{
    std::string tmpString;

    std::getline(*f, nombre);

    std::getline(*f, tmpString);
    std::istringstream(tmpString) >> idOwner;

    std::getline(*f, localizacion);
    std::getline(*f, pais);
    std::getline(*f, continente);
    std::getline(*f, observacion);
}

