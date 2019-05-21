#include "Precuencias.h"

Precuencias::Precuencias(int tamanio){
    this->npares = 0;
    this->parejas = new Pareja[tamanio];
}
        
Precuencias::~Precuencias(){
    this->npares = 0;
    delete [] parejas;
}

Precuencias::Precuencias(const Precuencias &pr){
    this->npares = pr.npares;
    for(int i=0;i<this->npares;i++){
        this->parejas[i] = pr.parejas[i];
    }
}

void Precuencias::agregarValor(int valor){
    bool encontrado = false;
    int posicion = 0;
    Pareja aux;
    aux.dato = valor;
    aux.nveces = 1;
    if(npares == 0){
        parejas[0] = aux;
        this->npares+=1;
    }
    else{
    
        for(int i = 0;i<npares && !encontrado;i++){
            if(this->parejas[i].dato == aux.dato){
                posicion = i;
                encontrado = true;
                
            }
        }

        if(encontrado){
            this->parejas[posicion].nveces++;
        }
        else{
           parejas[npares] = aux;
           this->npares++;      
        }
    }
}

void Precuencias::mostrarPrecuencia(){
    for(int i=0;i<this->npares;i++){
        cout<<"Elemento "<<i<<" Dato: "<<this->parejas[i].dato<<" Frecuencia: "<<this->parejas[i].nveces<<endl; 
    }
}

bool Precuencias::operator ==(const Precuencias &pr){
    bool resultado = true;
    if(this->npares != pr.npares)
        return false;

    for(int i=0;i<this->npares;i++){
        if(this->parejas[i].dato != pr.parejas[i].dato ||this->parejas[i].nveces != pr.parejas[i].nveces)
            resultado = false;
    }
}

bool Precuencias::operator !=(const Precuencias &pr){
    bool resultado = true;
    if(this->npares != pr.npares)
        return false;

    for(int i=0;i<this->npares;i++){
        if(this->parejas[i].dato == pr.parejas[i].dato ||this->parejas[i].nveces == pr.parejas[i].nveces)
            resultado = false;
    }
}


