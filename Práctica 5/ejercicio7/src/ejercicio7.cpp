#include <iostream>
#include "Precuencias.h"

int main() {

    int secuencia = 939324;

    Precuencias pr(1);

    cout<<"Añadimos la secuencia "<<secuencia<<endl;
    
    pr.agregarValor(9);
    pr.agregarValor(3);
    pr.agregarValor(9);
    pr.agregarValor(3);
    pr.agregarValor(2);
    pr.agregarValor(4);
    

    cout<<"Mostramos la precuencia"<<endl;
    pr.mostrarPrecuencia();
}