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
        Menu();
        
        ~Menu();

        Menu(const Menu &m);

        void setTitulo(char *t);

        int getnopc();

        void agregarOpcion(char *o);

        void mostarMenu();

        bool operator =(const Menu &m);

};


#endif 