/**
 * @author Luis Miguel Aguilar González
 * @author David Gómez Hernández
*/

#ifndef POLILINEA_H
#define POLILINEA_H

#include <iostream>
using namespace std;

class Punto{
    private:
     int x;
     int y;
    
    public:
     
     /**
      * @brief Operador de consulta de los datos miembro
      * @return devuelve la coordenada x
      */
     int getX(){return x;};

     /**
      * @brief Operador de consulta de los datos miembro
      * @return devuelve la coordenada y
      */
     int getY(){return y;};
     
     /**
      * @brief Constructor sin parámetros de la clase Punto
      */
     Punto(){
         this->x = 0;
         this->y = 0;
     };

     /**
      * @brief Constructor con parámetros de la clase
      * @param x primera coordenada del punto
      * @param y segunda coordenada del punto
      */
     Punto(int x, int y){
        this->x = x;
        this->y = y;
     };
};

class Polilinea{
    private:
     Punto * p;
     int num;
     
     //Método privado para la reserva de memoria del vector dinámico
     void reservar__memoria(int tam){
         this->num = tam;
         this->p = new Punto [this->num];
     }

     //Método privado para liberar el espacio en memoria
     void liberar_memoria(){
         this->num = 0;
         delete [] this->p;
     }

    public:

        /**
         * @brief Constructor sin parámetros de la clase Polilinea
         */
        Polilinea();

        /**
         * @brief Constructor de la clase
         * @param El tamaño del vector de puntos para la reserva de memoria
         */
        Polilinea(int tam);

        /**
         * @brief Constructor copia de la clase
         * @param Objeto de la clase Polilinea
         */
        Polilinea(const Polilinea & p1);

        /**
         * @brief Destructor de la clase Polilinea
         */
        ~Polilinea();

        /**
         * @brief Agrega un nuevo punto al array de puntos redimensionandolo
         */
        void agregarPunto(Punto nuevo);

        /**
         * @brief Suma los elementos de dos polilineas en una
         * @param nuevo es la polilinea a sumar
         * @return devuelve la polilinea resultado de la suma
         */
        Polilinea operator+(const Polilinea & nuevo);
 
        friend ostream& operator<<(ostream & out, const Polilinea & p);
};

/**
 * @brief imprime un objeto de la clase Polilinea
 * @param ostream flujo de salida
 * @param p objeto de la clase Polilinea a imprimir
 * @return el flujo de salida
 */
std::ostream & operator<<(ostream & os, const Polilinea & p);

#endif /*POLILINEA*/