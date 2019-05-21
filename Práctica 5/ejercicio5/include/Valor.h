//
// Created by mgomez on 16/02/17.
//
#ifndef VALOR_H
#define VALOR_H

#include <iostream>

using namespace std;

class Valor{
  public:
    int fila;
    int columna;
    double valor;

    /**
     * Constructor por defecto
     */
    Valor(){
    }

    /**
     * Constructor de la clase
     * @param fila
     * @param columna
     * @param valor
     */
    Valor(int fila, int columna, double valor){
        this->fila=fila;
        this->columna=columna;
        this->valor=valor;
    }

    /**
     * Metodo paa mostrar el contenido de un objeto
     */
    void mostrar() const {
        cout << "{" << fila << ", " << columna << ", " << valor << "} ";
    }

    bool operator =(const Valor &v){
        this->fila = v.fila;
        this->columna = v.columna;
        this->valor = v.valor;
    }
};
#endif //VALOR_H
