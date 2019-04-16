#include "utilidades.h"
#include "Valor.h"


void mostrarContenido(const Valor * const coleccion, int util){
    for(int i=0;i<util;i++){
        coleccion[i].mostrar();
    }
    cout<<endl;
}

bool comprobarValor(const Valor * const coleccion, Valor valor){
    bool resultado = false;
    if(coleccion->fila == valor.fila && coleccion->columna == valor.columna)
        resultado = true;
    
    return resultado;
}

int combinarSuma(const Valor * const coleccion1, int util1, const Valor * const coleccion2,int util2, Valor resultado[]){
    int posicion = 0;
    Valor auxiliar;
    bool salida;

        for(int i=0;i<util1;i++){
            auxiliar = coleccion1[i];
            salida = false;
            for(int j=0;j<posicion && !salida;j++){
                if(comprobarValor(resultado,auxiliar)){
                    resultado[j].valor = resultado[j].valor + auxiliar.valor;
                    salida = true;
                }
            }
            if(!salida){
                resultado[posicion]=auxiliar;
                posicion++;
            }
        }
        for(int i=0;i<util2;i++){
            auxiliar = coleccion2[i];
            salida = false;
            for(int j=0;j<posicion && !salida;j++){
                if(comprobarValor(resultado,auxiliar)){
                    resultado[j].valor = resultado[j].valor + auxiliar.valor;
                    salida = true;
                }
            }
            if(!salida){
                resultado[posicion]=auxiliar;
                posicion++;
            }
    }

    return posicion;
}

