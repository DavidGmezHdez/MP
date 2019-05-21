#include "Celda.h"


    /**
     * Constructor de la clase
     */
    Celda::Celda(double info){
        this->info=info;
        sig=NULL;
    }

    /**
     * Recupera el valor almacenado en una celda
     * @return
     */
    double Celda::obtenerInfo(){
        return this->info;
    }

    void Celda::asignarInfo(double dato){
        this->info = dato;
    }

    /**
     * Devuelve puntero a la celda siguiente
     * @return sig
     */
    Celda *Celda::obtenerSiguiente(){
        return sig;
    }

    /**
     * Se asigna valor cero al puntero siguiente
     */
    void Celda::anularSiguiente(){
        this->sig = 0;
    }

    /**
     * Se asigna el valor de siguiente
     */
    void Celda::asignarSiguiente(Celda *pCelda){
        this->sig = pCelda;
    }

    /**
     * Metodo para imprimir el contenido de una celda
     */
    void Celda::mostrar(){
        cout<<"-->"<<this->info;
    }