#include "Celda.h"
using namespace std;

Celda::Celda(double info){
  this->info=info;
  this->sig=NULL;
}

double Celda::obtenerInfo(){
    return this->info;
}

Celda * Celda::obtenerSiguiente(){
    return this->sig;
}

void Celda::anularSiguiente(){
    delete  this->sig;
    this->sig = NULL;
}

void Celda::asignarSiguiente(Celda *pCelda){
    this->sig = pCelda;
}

void Celda::mostrar(){
    cout << this->info;
}

std::ostream& operator<<(ostream & out, const Celda & p){
    out << p.info;
}