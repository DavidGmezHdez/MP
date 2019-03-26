#ifndef UTILIDADES_H
#define UTILIDADES_H

#include <iostream>

const int COL=100;

const int FIL = 100;

bool multiplicar(double m1[][COL], int n11, int n12, double m2[][COL], int n21, int n22, double resultado[][COL],int &nres1, int &nres2);

void mostrarMatriz(double m[][COL],int n1, int n2);


#endif