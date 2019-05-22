#include <iostream>

#include "MatrizDispersa.h"

int main() {
    cout<<"Constructor por defecto"<<endl;
    MatrizDispersa matriz(3,3,3);

    matriz.mostrarMatiz();


    cout<<"Constructor por valores"<<endl;
    int filas[3] = {0,1,2};
    int columnas[3] = {0,1,2};
    double valores[3] = {1.0,2.0,3.0};
    MatrizDispersa matrizValores(filas,3,columnas,3,valores,3);
    matrizValores.mostrarMatiz();

    cout<<"Constructor por copia"<<endl;
    MatrizDispersa matrizCopia(matrizValores);
    matrizCopia.mostrarMatiz();
    cout<<endl;
    cout<<"Matrices a sumar"<<endl;
    double valores2[3] = {2.0,4.0,6.0};
    MatrizDispersa matriz2(filas,3,columnas,3,valores2,3);

    matrizValores.mostrarMatiz();
    cout<<endl;
    matriz2.mostrarMatiz();
    cout<<endl<<endl;

    matrizValores = matrizValores+matriz2;

    cout<<"Resultado"<<endl;
    matrizValores.mostrarMatiz();
}