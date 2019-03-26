#include "utilidades.h"

using namespace std;

int localizarSubcadena(char cadena[], char subcadena[]){
    int posicion = -1;
    string cad = cadena;
    string subcad = subcadena;
    posicion = cad.find(subcad);
    if(posicion== cad.length())
        posicion = -1;

    return posicion;
}