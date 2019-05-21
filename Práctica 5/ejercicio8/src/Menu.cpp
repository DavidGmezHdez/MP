#include "Menu.h"
    Menu::Menu(){
        this->titulo = new char[20]; //Suponemos como máximo el tamaño del titulo de 20 caracteres
        this->opc = new char*[1];
        for(int i=0;i<1;i++){
            this->opc[i] = new char[20]; //Suponemos como maximo el tamaño de las opciones de 20 caracteres
        }
        this->nopc = 0;
    }
        
    Menu::~Menu(){
        delete [] this->titulo;
        for(int i=0;i<this->nopc;i++){
            delete [] this->opc[i];
        }

        delete this->opc;
        this->nopc = 0;
    }

    Menu::Menu(const Menu &m){
        
    }

    void Menu::setTitulo(char *t){
        this->titulo = t;
    }

    int Menu::getnopc(){
        return this->nopc;
    }

    void Menu::agregarOpcion(char *o){
        this->opc[nopc] = o;
        this->nopc++;
    }

    void Menu::mostarMenu(){
        cout<<"Titulo: "<<titulo<<endl;
        cout<<"Opciones: "<<endl;
        for(int i=0;i<nopc;i++){
            cout<<"Opcion "<<i<<": "<<this->opc[i]<<endl;
        }
    }

    bool Menu::operator =(const Menu &m){
        this->titulo = m.titulo;
        this->nopc = m.nopc;
        for(int i=0;i<this->nopc;i++){
            this->opc[i] = m.opc[i];
        }
    }

