#include "Menu.h"
    Menu::Menu(int n){
        titulo = new char[20]; //Suponemos como máximo el tamaño del titulo de 20 caracteres
        opc = new char*[n];
        for(int i=0;i<1;i++){
            opc[i] = new char[20]; //Suponemos como maximo el tamaño de las opciones de 20 caracteres
        }
        nopc = 0;
    }
        
    Menu::~Menu(){
        delete[] opc;
        nopc = 0;
    }

    Menu::Menu(const Menu &m){
        this->nopc = m.nopc;
        this->titulo = m.titulo;
        this->opc = new char*[sizeof(m.opc)];
        this->opc = m.opc;
    }

    void Menu::setTitulo(char *t){
        titulo = t;
    }

    int Menu::getnopc(){
        return nopc;
    }

    void Menu::agregarOpcion(char *o){
        opc[nopc] = o;
        nopc++;
    }

    void Menu::mostarMenu(){
        cout<<"Titulo: "<<titulo<<endl;
        cout<<"Opciones: "<<endl;
        for(int i=0;i<nopc;i++){
            cout<<"Opcion "<<i<<": "<<opc[i]<<endl;
        }
    }

    Menu Menu::operator =(const Menu &m){
        titulo = m.titulo;
        nopc = m.nopc;
        for(int i=0;i<nopc;i++){
            opc[i] = m.opc[i];
        }

        return *this;
    }

