/*
    @author: Luis Miguel Águilar
    @author: David Gómez Hernández
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
        MatrizDispersa(int filas, int columnas, int nvalores);
        
        ~MatrizDispersa();

        MatrizDispersa(const MatrizDispersa &matriz);

        MatrizDispersa(int *filas,int utilfilas,int *columnas,int utilcols, double *valores,int utilval);

        Valor devolverValor(int posfila, int poscolumna);

        void mostrarMatiz();

        bool operator +(const MatrizDispersa &matriz );

        bool operator =(const MatrizDispersa &matriz);

};


#endif //MATRIZ_DISPERSA.H