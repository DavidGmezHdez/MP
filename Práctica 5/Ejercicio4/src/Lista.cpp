#include "Lista.h"

Lista::Lista(){
    contenido = NULL;
}

Lista::Lista(const Lista & p){
    this->contenido = p.contenido;
}

void Lista::mostrar(){


    Celda * temporal = contenido;

    (*temporal).mostrar();
    
    while((*temporal).obtenerSiguiente() != NULL){
        temporal=(*temporal).obtenerSiguiente();
        cout << " -> ";
        (*temporal).mostrar();
    }
}

std::ostream& operator<<(ostream & out, const Lista & p){
    Celda * temporal = p.contenido;

    out << (*temporal);
    
    while((*temporal).obtenerSiguiente() != NULL){
        temporal=(*temporal).obtenerSiguiente();
        out << " -> ";
        out << (*temporal);
    }

    return out;
}

int Lista::obtenerLongitud(){
    Celda * temporal=contenido;

    int utiles = 1;

    while((*temporal).obtenerSiguiente() != NULL){
        temporal=(*temporal).obtenerSiguiente();
        utiles++;
    }

    return utiles;

}

void Lista::agregarFinal(double valor){
    Celda * temporal=contenido;
    Celda * aux=new Celda(valor);
    
    if(!contenido){
        contenido=aux;
    }
    else{
        while((*temporal).obtenerSiguiente()!=NULL){
            temporal=(*temporal).obtenerSiguiente();
        }
        (*temporal).asignarSiguiente(aux);
    }
}

void Lista::agregarInicio(double dato){
    
    Celda * aux = new Celda(dato);
    aux->asignarSiguiente(this->contenido);
    contenido = aux;

}

void Lista::imprimirInvertido(){
    
    Celda * temporal=contenido;
    double elementos[100];
    int k = 0;

    if(!contenido){
        (*contenido).mostrar();
    }
    else{
        while((*temporal).obtenerSiguiente()!=NULL){
            temporal=(*temporal).obtenerSiguiente();
            elementos[k] = (*temporal).obtenerInfo();
            k++;
        }
    }

    for(int i = k; i > 0; i--){
        if(i > 1)
            cout << elementos[i] << " -> ";
        else
            cout << elementos[i];
    }

}

void Lista::eliminarFinal(){
    Celda * temporal=contenido;
    Celda * aux;

    if(!contenido){
        contenido;
    }
    else{
        while((*temporal).obtenerSiguiente()!=NULL){
            aux = temporal;
            temporal=(*temporal).obtenerSiguiente();
        }

        (*aux).anularSiguiente();
        
    }
}

Celda * Lista::obtener(int posicion){
    
    Celda * temporal=contenido;
    int i = 0;

    if(!contenido){
        contenido;
    }
    else{
        if(i == posicion)
            return temporal;
            
        while((*temporal).obtenerSiguiente()!=NULL){
            i++;
            temporal=(*temporal).obtenerSiguiente();
            if(i == posicion)
                return temporal;
        }  
    }
}

bool Lista::agregarPosicion(int indice, double dato){
    
    Celda  nueva(dato);
    Celda * n = &nueva;
    bool encontrado = false;

    if(indice == 1){
        (*n).asignarSiguiente(contenido);
        contenido = n;
    }
    else{
        Celda * t = contenido;

        for(int i = 1; t!=NULL; i++){
            if(i == indice)
            {
                encontrado = true;
                (*n).asignarSiguiente((*t).obtenerSiguiente());
                (*t).asignarSiguiente(n);
            }
            (*t).asignarSiguiente((*t).obtenerSiguiente());
        }
    }

    return encontrado;

}

void Lista::liberarEspacio(){
    delete contenido;
}

Lista::~Lista(){
    delete contenido;
}