#include <iostream>
#include "Barquitos.h"
using namespace std;
#define FIL 10
#define COL 10

int main(){

    Barquitos barco(FIL, COL);

    //Barco Inicial
    cout << "\nMatriz inicial:\n" << barco << endl << endl;

    //Añadimos barco en el punto (0,0) en H
    barco.Ubicar(0,0,5,'H');
    cout << "Barco añadido en la posicion (0,0) Tam = 5 horizontal:\n" << barco << endl << endl;;

    //Añadimos barco en el punto (4,4) en vertical
    barco.Ubicar(4,4,5,'V');
    cout << "Barco añadido en la posicion (4,4) Tam = 5 vertical:\n\n" << barco << endl;

    //Comprobación de que tiene en cuenta todos los problemas que puedan aparecer
    barco.Ubicar(0,0,5,'V');
    barco.Ubicar(14,14,5,'V');
    barco.Ubicar(4,4,15,'V');
    barco.Ubicar(4,4,5,'Q');
}