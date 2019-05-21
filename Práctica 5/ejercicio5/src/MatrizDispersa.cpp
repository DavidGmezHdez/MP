#include "MatrizDispersa.h"
#include "Valor.h"

MatrizDispersa::MatrizDispersa(int filas, int columnas, int valores){
    this->nfilas = filas;
    this->ncolumnas = columnas;
    this->numeroValores = valores;
    this->valores = new Valor[numeroValores];
        for(int i=0;i<nfilas;i++){
        for(int j=0;j<ncolumnas;j++){
            this->valores[i].fila = i;
            this->valores[i].columna = j;
            this->valores[i].valor = 0;
        }
    }
}

MatrizDispersa::~MatrizDispersa(){
    this->nfilas = 0;
    this->ncolumnas = 0;
    this->numeroValores = 0;
    delete [] valores;
}

 MatrizDispersa::MatrizDispersa(const MatrizDispersa &matriz){
    this->nfilas = matriz.nfilas;
    this->ncolumnas = matriz.ncolumnas;
    this->numeroValores = matriz.numeroValores;
    valores = new Valor[numeroValores];

    for(int i=0;i<numeroValores;i++){
        this->valores[i] = matriz.valores[i];
    }
}


MatrizDispersa::MatrizDispersa(int *filas,int utilfilas,int *columnas,int utilcols, double *valores,int utilval){
    this->numeroValores = utilfilas;
    this->valores = new Valor[numeroValores]; 
    for(int i=0;i<nfilas;i++){
        for(int j=0;j<ncolumnas;j++){
            this->valores[i].fila = i;
            this->valores[i].columna = j;
            this->valores[i].valor = 0;
        }
    }
     
    for(int i = 0;i<numeroValores;i++){
        this->valores[i].fila = filas[i];
        this->valores[i].columna = columnas[i];
        this->valores[i].valor = valores[i];
     }
 }

Valor MatrizDispersa::devolverValor(int posfila, int poscol){
    bool salida = false;

    for(int i=0;i<numeroValores && !salida;i++){
        if(valores[i].fila == posfila && valores[i].columna == poscol){
            cout<<valores[i].fila<<" "<<valores[i].columna<<" "<<valores[i].valor<<endl;
            return valores[i];
        }
    }
}


void MatrizDispersa::mostrarMatiz(){
     for(int i=0;i<nfilas;i++){
         for(int j=0;j<ncolumnas;j++){
            Valor aux;
            bool salida = false;
            for(int k=0;k<numeroValores && !salida;k++){
                if(valores[k].valor != 0 && valores[k].fila == i && valores[k].columna == j){
                    salida = true;
                    aux = valores[k];
                }
            }

            if(salida){
                cout<<aux.valor;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
 }


bool MatrizDispersa::operator +(const MatrizDispersa &matriz ){
    bool salida;
    int posicion;
    Valor auxiliar;
    for(int i=0;i<numeroValores;i++){
        auxiliar = valores[i];
        salida = false;
        posicion = 0;
        for(int j = 0;j<matriz.numeroValores && !salida;j++){
            if(auxiliar.fila == matriz.valores[j].fila && auxiliar.columna == matriz.valores[j].columna){
                valores[j].valor += matriz.valores[j].valor;
                salida = true;
            }
            else
                posicion++;
        }

        if(!salida){
            this->valores[numeroValores] = matriz.valores[posicion];
            this->numeroValores++;
        }
    }
 }

 bool MatrizDispersa::operator =(const MatrizDispersa &matriz){
    this->nfilas = matriz.nfilas;
    this->ncolumnas = matriz.ncolumnas;
    this->numeroValores = matriz.numeroValores;
    valores = new Valor[numeroValores];
    for(int i=0;i<numeroValores;i++){
        this->valores[i] = matriz.valores[i];
    }
 }

