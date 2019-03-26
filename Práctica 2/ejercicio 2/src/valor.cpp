#include "valor.h"

using namespace std;

    Valor::Valor(){
        fila=-1;
        columna=-1;
        valor=0;
    }

    Valor::Valor(int f, int c, double v){
        if(f>=0)
            fila = f;
        else
            fila = 0;
        
        if(c>=0)
            columna = c;
        else
            columna = 0;
        
        valor = v;
    }

    void Valor::setFila(int f){
        if(f<0){
            cerr<<"Valor negativo, asignando 0 al valor de la fila";
            fila = 0;
        }
        else
            fila = f;
    }

    void Valor::setColumna(int c){
        if(c<0){
            cerr<<"Valor negativo, asignando valor 0 a la columna";
            columna = 0;
        }
        else    
            columna = c;
    }

    void Valor::setValor(double v){
        valor = v;
    }


