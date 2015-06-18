/*
 * MainWindow.hpp
 *
 * Proyecto Integrador - Universidad Europea de Madrid -
 *
 * Author: María Hortal Gonzalez
 *
 */
#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include "vector.h"
#include "clasenegos.hpp"
#include "claseowners.hpp"
#include "claseoficinas.hpp"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    pel::Vector<claseNegos> v;
    pel::Vector<claseOficinas> v2;
    pel::Vector<claseOwners> v3;


private:
    Ui::MainWindow *ui;


private slots:

    void openNegos();
    void openOwners();
    void openOficinas();
//    void openMenuNegos();
//    void openMenuOwners();
//    void openMenuOficinas();
};

#endif // MAINWINDOW_HPP

