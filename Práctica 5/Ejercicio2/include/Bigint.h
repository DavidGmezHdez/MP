/**
 * @author Luis Miguel Aguilar González
 * @author David Gómez Hernández
*/

#ifndef BIGINT
#define BIGINT

#include <iostream>
using namespace std;

class Bigint{
    private:
        int *v;
        int util;

        //Método privado para la reserva de memoria del vector dinámico
        void reservar_memoria(int tam){
            v = new int [tam];
        }
        
        //Método privado para liberar el espacio en memoria
        void liberar_memoria(){
            this->util = 0;
            delete [] v;
        }

    public:

        /**
         * @brief Se trata del constructor base para la clase Bigint
         */
        Bigint();

        /**
         * @brief Constructor por parámetros 
         * @param tam es el tamaño del vector a reservar
         */
        Bigint(int tam);

        /**
         * @brief Constructor por parámetros
         * @param v es el vector de numeros enteros, cada una de las cifras que 
         * conforman el Bigint
         * @param util, es el tamaño de dicho vector
         */
        Bigint(int v[], int util);

        /**
         * @brief Destructor de la clase
         */
        ~Bigint();

        /**
         * @brief Constructor copia de la clase Bigint
         * @param Objeto de la clase Bigint a copiar
         */
        Bigint(const Bigint & big);

        /**
         * @brief añade un nuevo elemento a la posición indicada
         * @param pos se trata de la posición a insertar
         * @param numero a insertar que será uno de los digitos
         * de nuestro numero
         */
        void setPos(int pos, int numero);
        
        /**
         * @brief devuelve la posición indicada
         * @param pos se trata de la posición a consultar
         * @return devuelve la posición consultada
         */
        int getPos(int pos) const;
        
        /**
         * @brief modifica el miembro de la clase 
         * que indica el tamaño en digitos del entero
         * @param util es el nuevo valor para el miembro de la clase util
         */
        void setUtil(int util);
        
        /**
         * @brief calcula el numero de mayor tamaño
         * @param objeto con el que se compara la propia clase
         * @return devuelve un objeto de la clase, el mayor
         */
        Bigint max(Bigint b2);

        /**
         * @brief calcula el numero de menor tamaño
         * @param objeto con el que se compara la propia clase
         * @return devuelve un objeto de la clase, el menor
         */
        Bigint min(Bigint b2);

        /**
         * @brief suma los dos números con acarreo
         * @param Objeto de la clase Bigint con el que sumar
         * @return Devuelve el objeto de la clase Bigint resultado
         */
        Bigint operator+(const Bigint& big);

    
        friend ostream& operator<<(ostream & out, const Bigint &big);
        friend istream& operator>>(istream & in, const Bigint &big);
};


/**
 * @brief imprime un objeto de la clase Bigint
 * @param istream flujo de entrada
 * @param big objeto de la clase Bigint a leer
 * @return el flujo de entrada
 */
std::istream & operator>>(istream & is, Bigint &big);

/**
 * @brief imprime un objeto de la clase Bigint
 * @param ostream flujo de salida
 * @param big objeto de la clase Bigint a imprimir
 * @return el flujo de salida
 */
std::ostream & operator<<(ostream & os, const Bigint &big);

#endif /*BIGINT*/