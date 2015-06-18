/*
 * main.cpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#include <iostream>

#include "mainwindow.hpp"
#include "negos.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

