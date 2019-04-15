//
// Created by mgomez on 16/02/17.
//

#ifndef UTILIDADES_H
#define UTILIDADES_H
#include <iostream>

#include "Valor.h"

void mostrarContenido(const Valor * const coleccion, int util);

bool comprobarValor(const Valor * const coleccion, Valor valor);

int combinarSuma(const Valor * const coleccion1, int util1, const Valor * const coleccion2,
                 int util2, Valor resultado[]);
#endif //UTILIDADES_H
