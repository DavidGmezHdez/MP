#include "Barquitos.h"

Barquitos::Barquitos(int num_filas, int num_col){
    reservar_memoria(num_filas,num_col);
}

Barquitos::Barquitos(const Barquitos& barco){
    
    this->util_col = barco.util_col;
    this->util_fil = barco.util_fil;

    this->reservar_memoria(util_fil,util_col);
    
    for(int i = 0; i < barco.util_fil; i++){
        for(int j = 0; j < barco.util_col; j++){
            this->matriz[i][j] = barco.matriz[i][j];        
        }
    }

}

Barquitos::~Barquitos(){
    this->liberar_memoria();
}

void Barquitos::inicializar(){
    this->matriz = {0};
}

bool Barquitos::Ubicar(int fila_colocar, int col_colocar, const int tam, char coloc){

    bool no_insertar = false;
    bool pos = false;

    if(tam < 1 || tam > 9)
        cout << "\nNo puede introducirse un valor mayor que 9\n";
    else{
        if(util_fil > fila_colocar || util_col > col_colocar){
            if(coloc == 'H'){
                pos = true;
                if(col_colocar + tam < util_col){
                    for(int j = col_colocar; j < tam && !no_insertar; j++){
                        if(this->matriz[fila_colocar][j] == 1){
                            no_insertar = true;
                        }
                    }
                }
            }
            else if(coloc == 'V'){
                if(fila_colocar + tam < util_fil){
                    for(int i = fila_colocar; i < tam && !no_insertar; i++){
                        if(this->matriz[i][col_colocar] == 1){
                            no_insertar = true;
                        }
                    }
                }
            }
            else
            {
                cout << "\nNo se reconoce el caracter introducido\n";
            }

            if(no_insertar){
                cout << "\nExiste ya un barco en la posicion que se quiere insertar\n";
            }
            else{
                if(pos){
                    for(int j = col_colocar; j < col_colocar + tam ; j++){
                        this->matriz[fila_colocar][j] = 1;
                    }
                }
                else{
                    for(int i = fila_colocar; i < fila_colocar + tam; i++){
                        this->matriz[i][col_colocar] = 1;
                    }
                }
            }
            
        }
        else{
            cout << "\nLa posición indicada no existe\n";
        }

        
    }

    if(pos)
        return true;
    else 
        return false;
}

Barquitos& Barquitos::operator=(const Barquitos barco){
    
    if(this != &barco){
        this->liberar_memoria();
        this->reservar_memoria(barco.util_fil, barco.util_col);

        for(int i = 0; i < barco.util_fil; i++){
            for(int j = 0; j < barco.util_col; j++){
                this->matriz[i][j] = barco.matriz[i][j];        
            }
        }
    }
    
    return *this;

}


std::ostream & operator<<(ostream & os, const Barquitos & Barcos){

    for(int i = 0; i < Barcos.util_fil; i++){
        os << endl;
        for(int j = 0; j < Barcos.util_col; j++){
            os << Barcos.matriz[i][j] << " ";
        }
    }
    
    return os;
}