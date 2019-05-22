#include "Polilinea.h"

Polilinea::Polilinea(){
    this->reservar__memoria(0);
}

Polilinea::Polilinea(int tam){
    this->reservar__memoria(tam);
    this->num = tam;
}

Polilinea::Polilinea(const Polilinea & p1){

    this->num = p1.num;
    this->reservar__memoria(this->num);

    for(int i = 0; i < this->num; i++){
        this->p[i] = p1.p[i];
    }

}

Polilinea::~Polilinea(){
    this->liberar_memoria();
}

void Polilinea::agregarPunto(Punto Nuevo){
    int num = this->num + 1;

    Polilinea * aux = new Polilinea(num);

    for(int i = 0; i < num - 1; i++){
        aux->p[i] = this->p[i];
    }

    this->liberar_memoria();

    this->num = num;
    this->p = aux->p;

    this->p[num - 1] = Nuevo;
}

Polilinea Polilinea::operator+(const Polilinea & nuevo){
    
    Polilinea resultado;

    for(int i = 0; i < this->num; i++){
        resultado.agregarPunto(this->p[i]);
    }

    for(int i = 0; i < nuevo.num; i++){
        resultado.agregarPunto(nuevo.p[i]);
    }

    return resultado;
}

std::ostream & operator<<(ostream & os, const Polilinea & p){

    for(int i = 0; i < p.num; i++){
        os << "(" << p.p[i].getX() << ", " << p.p[i].getY() << ")" << " ";
    }
    os << endl;

    return os;

}

