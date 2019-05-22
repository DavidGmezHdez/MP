/**
 * @author Luis Miguel Aguilar González
 * @author David Gómez Hernández
*/

#ifndef CELDA_H
#define CELDA_H

#include <iostream>
using namespace std;

class Celda {

private:

    double info;
    Celda *sig;

public:

    /**
     * @brief Constructor de la clase por parametros
     * @param info valor de la celda
     */
    Celda(double info);

    /**
     * @brief Recupera el valor almacenado en una celda
     * @return el valor de la celda
     */
    double obtenerInfo();

    /**
     * @brief Devuelve puntero a la celda siguiente
     * @return sig el puntero
     */
    Celda *obtenerSiguiente();

    /**
     * @brief Se asigna valor cero al puntero siguiente
     */
    void anularSiguiente();

    /**
     * @brief Se asigna el valor de siguiente
     * @param la celda a asignar
     */
    void asignarSiguiente(Celda *pCelda);

    /**
     * @brief Metodo para imprimir el contenido de una celda
     */
    void mostrar();

 
    friend ostream& operator<<(ostream & out, const Celda & p);
};

/**
 * @brief Muestra de la celda por sobrecarga
 * @param ostream es el flujo de salida
 * @param p es el objeto de la clase Celda a imprimir
 * @return devuelve el flujo de salida
*/
std::ostream& operator<<(ostream & out, const Celda & p);

#endif	/* CELDA */

