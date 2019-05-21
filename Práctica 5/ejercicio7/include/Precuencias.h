/*
    @author: Luis Miguel Águilar
    @author: David Gómez Hernández
*/

#ifndef PRECUENCIAS_H
#define PRECUENCIAS_H

#include <iostream>

using namespace std;

struct Pareja{
    int dato;
    int nveces;
};  



class Precuencias{
    private:
        Pareja *parejas;
        int npares;
    public:
        Precuencias(int tamanio);
        
        ~Precuencias();

        Precuencias(const Precuencias &pr);

        void agregarValor(int valor);

        void mostrarPrecuencia();

        bool operator ==(const Precuencias &pr);

        bool operator !=(const Precuencias &pr);
};


#endif 