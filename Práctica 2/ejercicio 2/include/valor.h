#ifndef VALOR_H
#define VALOR_H
#include <iostream>
using namespace std;

class Valor{
private:
    int fila;
    int columna;
    double valor;
public:
    Valor();

    Valor(int f, int c, double v);

    inline int getFila(){return fila;};
    
    inline int getColumna(){return columna;};

    inline double getValor(){return valor;};

    void setFila(int f);

    void setColumna(int c);

    void setValor(double v);

};

#endif