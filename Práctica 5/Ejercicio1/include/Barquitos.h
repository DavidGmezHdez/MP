/**
 * @author Luis Miguel Aguilar González
 * @author David Gómez Hernández
*/

#ifndef BARQUITOS
#define BARQUITOS

#include <iostream>
#include <assert.h>
using namespace std;

class Barquitos{
    private:
        int **matriz;
        int util_col;
        int util_fil;
        
        //Método privado para liberar el espacio en memoria
        void liberar_memoria(){
            for(int i = 0; i < util_fil; i++){
                delete [] this->matriz[i];
            }
            delete [] this->matriz;
        }

        //Método privado para la reserva de memoria de la matriz dinámica
        void reservar_memoria(int util_col, int util_fil){
            this->util_fil = util_fil;
            this->util_col = util_col;
            
            this->matriz = new int *[util_fil];

            for(int i = 0; i < util_fil; i++)
                this->matriz[i] = new int [util_col];
            
        }
    
    public:

        /**
         * @brief Constructor de la clase por parámetros
         * @param num_filas tamaño en filas de la matriz dinámica
         * @param num_col tamaño en columnas de la matriz dinámica
         */
        Barquitos(int num_filas, int num_col);

        /**
         * @brief Constructor copia de la clase
         * @param Objeto de la clase Barquitos a copiar
         */
        Barquitos(const Barquitos& barco);

        /**
         * @brief destructor de la clase
         */
        ~Barquitos();

        /**
         * @brief inicializa todos los elementos de la matriz a 0
         */
        void inicializar();

        /**
         * @brief devuelve las filas de la matriz
         * @return util_fil de la clase Barquitos
         */
        int getFil() const;

        /**
         * @brief devuelve las columnas de la matriz
         * @return util_col de la clase Barquitos
         */
        int getCol() const;

        /**
         * @brief devuelve el valor de una posicion determinada
         * @param fil coordenada de las filas
         * @param col coordenada de las columnas
         * @return entero que se encuentra en dicha posición
         */
        int getMatrizPos(int fil, int col) const;

        /**
         * @brief devuelve verdadero o falso dependiendo de si 
         * el barco se puede colocar o no
         * @param fila_colocar se trata de la coordenada de las filas inicial
         * @param col_colocar se trata de la coordenada de las columnas inicial
         * @param tam es la tamaño del barco
         * @param coloc la dirección en que se va a colocar
         * (como no se especifica en el ejercicio he sobreentendido que en caso de que
         * sea V se trata como que el barco se coloca hacia abajo y si es H se colocará hacia
         * la derecha tomando en ambos casos el punto inicial como la referencia)
         * @return bool indica verdadero si el barco se ha podido colocar
         */
        bool Ubicar(int fila_colocar, int col_colocar,const int tam, char coloc);

        /**
         * @brief iguala dos objetos de la clase Barquitos
         * @param barco con el que se iguala
         * @return devuelve un objeto de la clase Barquito
         */
        Barquitos& operator=(const Barquitos barco);
        
        friend ostream & operator<<(ostream & os, const Barquitos & Barcos);
        

};

/**
 * @brief imprime un objeto de la clase Barquitos
 * @param ostream flujo de salida
 * @param Barcos objeto de la clase Barquitos a imprimir
 * @return el flujo de salida
 */
std::ostream & operator<<(ostream & os, const Barquitos & Barcos);

#endif /*BARQUITOS*/