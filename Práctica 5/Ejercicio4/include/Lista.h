/**
 * @author Luis Miguel Aguilar González
 * @author David Gómez Hernández
*/

#ifndef LISTA_H
#define LISTA_H

#include "Celda.h"

class Lista {
private:
    Celda *contenido;

public:
    /**
     * @brief Constructor sin parámetros de la clase
     */
    Lista();

    /**
     * @brief Constructor copia
     * @param Se toma como parámetro el objeto a copiar
     **/
    Lista(const Lista & p);

    /**
     * @brief Destructor de la clase
     */
    ~Lista();

    /**
     * @brief Metodo para imrimir el contenido de la lista
     */
    void mostrar();

    /**
     * @brief Metodo para obtener la longitud de la lista
     * @return el numero de elementos de la lista
     */
    int obtenerLongitud();

    /**
     * @brief Metodo para aniadir un elemento al final de la lista
     * @param dato a almacenar
     */
    void agregarFinal(double dato);

    /**
     * @param Metodo para insertar un nuevo elemento al inicio de la lista
     * @param dato a almacenar
     */
    void agregarInicio(double dato);

    /**
     * @brief Metodo para imrimir el contenido de la lista
     * en sentido inverso: desde final a inicio
     */
    void imprimirInvertido();

    /**
     * @brief Metodo para eliminar el ultimo elemento de la lista
     */
    void eliminarFinal();

    /**
     * @brief Obtiene la celda que ocupa una determinada posicion
     * de la lista
     * @param posicion a obtener
     * @return direccion de la celda o null si no la encuentra
     */
    Celda *obtener(int posicion);

    /**
     * @brief Metodo para insertar una celda en una determinada posicion
     * @param indice posicion de insercion
     * @param dato dato a insertar
     * @return devuelve verdadero o falso en función de si la posición existe
     * o no, o simplemente si se ha insertado correctamente
     */
    bool agregarPosicion(int indice, double dato);

    /**
     * @brief Metodo para eliminar todas las celdas de la lista
     */
    void liberarEspacio();

    friend ostream& operator<<(ostream & out, const Lista & p);
};

/**
 * @brief Muestra de la lista por sobrecarga
 * @param ostream es el flujo de salida
 * @param p es el objeto de la clase lista a imprimir
 * @return devuelve el flujo de salida
*/
std::ostream& operator<<(ostream & out, const Lista & p);

#endif	/* LISTA */

