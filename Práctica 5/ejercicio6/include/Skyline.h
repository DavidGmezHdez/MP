/*
    @author: Luis Miguel Águilar
    @author: David Gómez Hernández
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
        Skyline(int tamanio);
        
        ~Skyline();

        Skyline(const Skyline &skyline);

        int getnEdificios();

        void aniadirEdificio(double final, double altura);

        void eliminarRepetidos(double* array, int &util);

        void mostrarSkyline();

        bool operator [](int n);
};


#endif 