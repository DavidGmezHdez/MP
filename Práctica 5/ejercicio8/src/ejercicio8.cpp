#include <iostream>
#include "Menu.h"

int main() {
    Menu m;
    m.setTitulo("Estados");
    m.agregarOpcion("Añadir");
    m.agregarOpcion("Cambiar");
    m.agregarOpcion("Eliminar");
    m.mostarMenu();
}