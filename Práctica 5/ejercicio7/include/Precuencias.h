/**
 * @author Luis Miguel Aguilar González
 * @author David Gómez Hernández
*/

#ifndef PRECUENCIAS_H
#define PRECUENCIAS_H

#include <iostream>

using namespace std;


/* Aunque en la práctica venía que se hiciera con una clase, he visto más conveniente para su uso el implementarlo con un struct
ya que es mucho más eficiente */
struct Pareja{
    int dato;
    int nveces;
};  

class Precuencias{
    private:
        Pareja *parejas;
        int npares;
    public:
        /**
         * @brief Constructor de la clase por parámetros
         * @param tamanio el tamaño del array de parejas
         */
        Precuencias(int tamanio);
        /**
         * @brief destructor de la clase
         */
        ~Precuencias();
        /**
         * @brief Constructor copia de la clase
         * @param Objeto de la clase Precuencias a copiar
         */
        Precuencias(const Precuencias &pr);
        /**
         * @brief Método que añade un nuevo valor al array. Si este está ya, aumenta el contador de frecuencias, si no,
         * lo incluye al final.
         * @param valor valor a introducir
         */
        void agregarValor(int valor);
        /**
         * @brief Método para mostrar la Precuencia
         */
        void mostrarPrecuencia();
        /**
         * @brief Compara dos objetos de tipo Precuencias
         * @return Deuvelve true si son iguales y false si son distintos
         */
        bool operator ==(const Precuencias &pr);
        /**
         * @brief Compara dos objetos de tipo Precuencias
         * @return Deuvelve true si son distintos y false si son iguales
         */
        bool operator !=(const Precuencias &pr);
};


#endif 