#include <iostream>

# include "Skyline.h"

int main() {
    Skyline skyline(8);
    cout<<"Construimos el skyline"<<endl;

    cout<<"Añadimos edificios"<<endl;
    skyline.aniadirEdificio(1.0,1.5,1.0);
    skyline.aniadirEdificio(1.5,2.0,2.0);
    skyline.aniadirEdificio(2.0,2.5,3.0);
    skyline.aniadirEdificio(3.5,4.0,5.0);

    cout<<"Mostramos el skyline "<<endl;
    for(int i=1;i<=skyline.getnEdificios();i++){
        skyline[i];
    }
    
}