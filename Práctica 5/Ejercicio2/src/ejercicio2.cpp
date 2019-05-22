#include "Bigint.h"

int main(){
    
    Bigint x1;
    Bigint x2;

    //Lectura de numeros

    cout << "\nIntroduce el primer big int: ";
    cin >> x1;

    cout << "\nIntroduce el segundo big int: ";
    cin >> x2;

    //Construcción de bigints
    cout << "\nPrimer Bigint: ";
    //Bigint x1(v1,13);
    cout << x1 << endl;

    cout << "\nSegundo Bigint: ";
    //Bigint x2(v2,9);
    cout << x2 << endl;

    //Comprobación del constructor copia
    Bigint x3(x1);
    cout << "\nConstructor copia del primer Bigint: ";
    cout << x3 << endl;

    //Suma de bigint

    Bigint res = x1 + x2;
    cout << "\nSolucion suma de los dos bigInt: ";
    cout << res << endl;

}