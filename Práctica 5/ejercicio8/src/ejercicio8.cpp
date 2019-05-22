#include <iostream>
#include "Menu.h"

int main() {
    Menu m(3);
    m.setTitulo("Estados estado");
    m.agregarOpcion("Añadir estado");
    m.agregarOpcion("Cambiar estado");
    m.agregarOpcion("Eliminar estado");
    m.mostarMenu();
}