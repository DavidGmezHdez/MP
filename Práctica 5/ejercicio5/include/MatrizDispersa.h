/**
 * @author Luis Miguel Aguilar González
 * @author David Gómez Hernández
*/

#ifndef MATRIZDISPERSA_H
#define MATRIZDISPERSA_H

#include <iostream>
#include "Valor.h"


class MatrizDispersa{
    private:
        int nfilas;
        int ncolumnas;
        Valor *valores;
        int numeroValores;
    public:

        /**
         * @brief Constructor de la clase por parámetros
         * @param filas tamaño en filas de la matriz dispersa
         * @param columnas tamaño en columnas de la matriz dispersa
         * param nvalores tamaño del array de valores
         */
        MatrizDispersa(int filas, int columnas, int nvalores);
        /**
         * @brief destructor de la clase
         */
        ~MatrizDispersa();
        /**
         * @brief Constructor copia de la clase
         * @param Objeto de la clase MatrizDispersa a copiar
         */
        MatrizDispersa(const MatrizDispersa &matriz);
        /**
         * @brief Constructor de la clase por parámetros
         * @param filas array de filas
         * @param utilfilas tamaño en filas de la matriz dispersa
         * @param columnas array de columnas
         * @param utilcols tamaño en columnas de la matriz dispersa
         * @param valores array de valores
         * param  utilval tamaño del array de valores
         */
        MatrizDispersa(int *filas,int utilfilas,int *columnas,int utilcols, double *valores,int utilval);
        /**
         * @brief Método que devuelve el valor en función de la fila y columna de la matriz. Si en el array de valores hay
         * algún Valor con esa fila y columna, devuelve ese valor, si no, devuelve un Valor con su valor 0
         * @param posfila la fila en la que se encuentra el elemento
         * @param poscolumna la columna en la que se encuentra el elemento
         * @return El valor en función de si existe en el array o no.
         */
        Valor devolverValor(int posfila, int poscolumna);
        /**
         * @brief Método para mostrar la matriz por consola
         */
        void mostrarMatiz();
        /**
         * @brief suma dos matrices sumando sus valores si se encuentran en la misma posición
         * @param Objeto de la clase MatrizDispersa con el que sumar
         * @return Devuelve el objeto de la clase MatrizDispersa resultado
         */
        MatrizDispersa operator +(const MatrizDispersa &matriz );
        /**
         * @brief Iguala una matriz a otra
         * @param Objeto de la clase MatrizDispersa con el que igualar
         * @return Devuelve el objeto de la clase MatrizDispersa resultado
         */
        MatrizDispersa operator=(const MatrizDispersa &matriz);

};

#endif