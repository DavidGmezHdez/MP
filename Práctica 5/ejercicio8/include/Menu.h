/*
    @author: Luis Miguel Águilar
    @author: David Gómez Hernández
*/

#ifndef MENU_H
#define MENU_H

#include <iostream>

using namespace std;

class Menu{
    private:
        char *titulo;
        char **opc;
        int nopc; 
    public:
        /**
         * @brief Constructor de la clase por parametros.
         * @param n numero de opciones
         */
        Menu(int n);
        /**
         * @brief destructor de la clase
         */
        ~Menu();
        /**
         * @brief Constructor copia de la clase
         * @param Objeto de la clase Menu a copiar
         */
        Menu(const Menu &m);
        /**
         * @brief Método que asigna un titulo al Menu 
         * @param t cadena de caracteres
         */
        void setTitulo(char *t);
        /**
         * @brief Método que devuelve el numero de opciones 
         * @return nopc
         */
        int getnopc();
        /**
         * @brief Método que agrega una opción al menu 
         * @param o opcion a añadir mediante una cadena de caracteres
         */
        void agregarOpcion(char *o);
        /**
         * @brief Método para mostrar el Menu
         */
        void mostarMenu();
        /**
         * @brief Iguala una menu a otro
         * @param Objeto de la clase Menu con el que igualar
         * @return Devuelve el objeto de la clase Menu resultado
         */
        Menu operator =(const Menu &m);

};


#endif 