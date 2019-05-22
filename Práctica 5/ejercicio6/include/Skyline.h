/**
 * @author Luis Miguel Aguilar González
 * @author David Gómez Hernández
*/

#ifndef SKYLINE_H
#define SKYLINE_H

#include <iostream>

using namespace std;


class Skyline{
    private:
        double *abcisas;
        double *alturas;
        int n;
        int nedificios;
    public:
        /**
         * @brief Constructor de la clase por parámetros
         * @param tamanio el tamaño del Skyline
         */
        Skyline(int tamanio);
        /**
         * @brief destructor de la clase
         */
        ~Skyline();
        /**
         * @brief Constructor copia de la clase
         * @param Objeto de la clase Skyline a copiar
         */
        Skyline(const Skyline &skyline);
        /**
         * @brief Método que devuelve el número de edificios del Skyline
         * @return nedificios
         */
        int getnEdificios();
        /**
         * @brief Método que añade un nuevo edificio al Skyline
         * @param comienzo la coordenada de inicio del edificio
         * @param final la coordenada de fin del edificio
         * @param altura la altura de dicho edificio
         */
        void aniadirEdificio(double comienzo,double final, double altura);
        /**
         * @brief metodo para eliminar los elementos repetidos en un array
         */
        void eliminarRepetidos(double* array, int &util);
        /**
         * @brief Método para mostrar el Skyline
         */
        void mostrarSkyline();
        /**
         * @brief Operador para obtener el edificio n del Skyline por consola
         * @param n el índice el edificio
         * @warning n debe de ser mayor o igual que 1
         */
        bool operator [](int n);
};


#endif 