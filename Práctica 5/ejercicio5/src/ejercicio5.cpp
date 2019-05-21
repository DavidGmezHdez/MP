#include <iostream>

# include "MatrizDispersa.h"

int main() {
    cout<<"Constructor por defecto"<<endl;
    MatrizDispersa matriz(4,4,4);

    matriz.mostrarMatiz();


    cout<<"Constructor por valores"<<endl;
    int filas[4] = {1,2,3,4};
    int columnas[4] = {1,2,3,4};
    double valores[4] = {1.0,2.0,3.0,4.0};
    MatrizDispersa matrizValores(filas,4,columnas,4,valores,4);
    matrizValores.mostrarMatiz();
/*
    cout<<"Constructor por copia"<<endl;
    MatrizDispersa matrizCopia(matriz);
    matrizCopia.mostrarMatiz();

    cout<<"Matrices a sumar"<<endl;
    double valores2[4] = {2.0,4.0,6.0,8.0};
    MatrizDispersa matrizCopia(filas,4,columnas,4,valores2,4);

    matriz.mostrarMatiz();

    cout<<endl<<endl;

    matrizCopia.mostrarMatiz();

    cout<<endl<<endl;

    matriz = matriz+matrizCopia;
*/

}