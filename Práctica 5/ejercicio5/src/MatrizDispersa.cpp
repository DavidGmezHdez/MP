#include "MatrizDispersa.h"
#include "Valor.h"

MatrizDispersa::MatrizDispersa(int filas, int columnas, int valores){
    this->nfilas = filas;
    this->ncolumnas = columnas;
    this->numeroValores = valores;
    this->valores = new Valor[numeroValores];
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
    this->nfilas = utilfilas;
    this->ncolumnas = utilcols;
    this->numeroValores = utilval;
    this->valores = new Valor[numeroValores]; 
    
     
    for(int i = 0;i<numeroValores;i++){
        this->valores[i].fila = filas[i];
        this->valores[i].columna = columnas[i];
        this->valores[i].valor = valores[i];  
     }
 }

Valor MatrizDispersa::devolverValor(int posfila, int poscol){
    bool salida = false;
    int posfil = 0 ,poscolumna = 0;
    Valor aux;
    aux.valor = 0;
    for(int i=0;i<numeroValores && !salida;i++){
        if(valores[i].fila == posfila && valores[i].columna == poscol){
            salida = true;
            posfila = i;
        }
    }

    if(salida){
        aux = valores[posfila];
    }

    return aux;
}


void MatrizDispersa::mostrarMatiz(){
     for(int i=0;i<nfilas;i++){
         for(int j=0;j<ncolumnas;j++){
            Valor aux = devolverValor(i,j);
            if(aux.valor == 0)
                cout<< 0 <<" ";
            else
                cout<<aux.valor<<" ";
        }
        cout<<endl;
    }
 }


MatrizDispersa MatrizDispersa::operator +(const MatrizDispersa &matriz ){
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

    return *this;
 }

 MatrizDispersa MatrizDispersa::operator=(const MatrizDispersa &matriz){
    if(&matriz!=this ){
        delete [] this->valores;
        this->nfilas = matriz.nfilas;
        this->ncolumnas = matriz.ncolumnas;
        this->numeroValores = matriz.numeroValores;
        valores = new Valor[numeroValores];
        for(int i=0;i<numeroValores;i++){
            this->valores[i] = matriz.valores[i];
        }
    }

    return *this;
 }

