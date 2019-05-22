#include "Polilinea.h"

int main(){

    Polilinea p1s;
    Polilinea p2s;

    //Introduccion de elementos
    
    Punto p1(1,2);
    p1s.agregarPunto(p1);
    Punto p2(2,3);
    p1s.agregarPunto(p2);

    
    Punto p3(4,5);
    p2s.agregarPunto(p3);
    Punto p4(6,7);
    p2s.agregarPunto(p4);

    //Muestra de elementos
    cout << "Primera polilinea: " << endl;
    cout << p1s << endl;
    cout << "Segunda polilinea: " << endl;
    cout << p2s << endl;

    //Constructor copia
    cout << "Prueba del constructor copia: " <<endl;
    Polilinea copia(p1s);
    cout << copia << endl;
    
    //Operador suma
    Polilinea res = p1s + p2s;

    cout << "Resultado de la suma: " <<endl;
    cout << res << endl;
    
}