#include "utilidades.h"

using namespace std;

bool insertarCadena(char base[], char aInsertar[],int posicion,char resultado[]){
    string bas =  base;
    string insertar = aInsertar;
    bool res;

    if (posicion > bas.length()){
        res = false;
    }
    else{
        bas.insert(posicion,insertar);
        for(int i = 0;i<bas.length();i++){
            resultado[i] = bas[i];
        }
        res = true;
    }

    return res;

}