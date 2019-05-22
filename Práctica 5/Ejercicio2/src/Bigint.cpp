#include "Bigint.h"

Bigint::Bigint(){
    this->util = 1;
    this->reservar_memoria(util);
    this->v[0] = 0;
}

Bigint::Bigint(int v[], int util){
    
    this->reservar_memoria(util);
    this->util = util;

    for(int i = 0; i < this->util; i++)
        this->v[i] = v[i];

}

Bigint::Bigint(int tam){
    this->reservar_memoria(tam);
    this->util = tam;
}

Bigint::~Bigint(){
    liberar_memoria();
}

Bigint::Bigint(const Bigint& big){

    this->util = big.util;
    this->reservar_memoria(util);

    for(int i = 0; i < util; i++)
        this->v[i] = big.v[i];
}



void Bigint::setPos(int pos,int numero){
    int tam = this->util + 1;

    Bigint *aux = new Bigint(tam);

    for(int i = 0; i  < tam - 1; i++)
    {
        aux->v[i] = this->v[i];
    }

    this->liberar_memoria();
    
    this->util = tam;
    this->v = aux->v;

    this->v[pos] = numero;
}

int Bigint::getPos(int pos) const{
    return this->v[pos];
}

void Bigint::setUtil(int util){
    this->util = util;
}

std::ostream & operator<<(ostream & out, const Bigint &big){
  
    for(int i = big.util - 1; i >= 0; i--) {
        out << big.v[i];
    }
    out << endl;
    return out;
}

std::istream& operator>>(istream & in, Bigint &big){
    
    string lectura;
    int i;

    in >> lectura;

    
    for(i = 0; i < lectura.length(); i++){
        int aux = lectura[i]; 
        aux = aux - 48;
        big.setPos(i,aux);
    }

    big.setUtil(i);
    
    return in;

}

Bigint Bigint::max(Bigint b2){
    if(this->util > b2.util) return *this;
    return b2;
}

Bigint Bigint::min(Bigint b2){
    if(this->util < b2.util) return *this;
    return b2;
}

Bigint Bigint::operator+(const Bigint& big){
    Bigint res;

    if(this->util >= big.util){
        int j = big.util - 1;
        for(int i = this->util - 1; i >= 0; i--){
            if(j >= 0){
                res.v[i] = this->v[i] + big.v[j];
                j--;
            }
            else
            {
                res.v[i] = this->v[i];
            }
            
            if(res.v[i+1] >= 10){
                int acarreo = res.v[i+1]/10;
                res.v[i + 1] = res.v[i+1]%10;
                res.v[i]+= acarreo; 
            }
        }

        if(res.v[0] >= 10){
            int acarreo  = res.v[0]/10;
            res.v[0] %= 10;

            for(int i = 0; i < this->util + 1; i++){
                res.setPos(i + 1, res.v[i]);
            }

            res.setPos(0,acarreo);
            
            res.setUtil(this->util + 1);

        }

        else
        {
            res.setUtil(this->util);
        }
        
        
    }
    else{

        int j = this->util - 1;
        for(int i = big.util - 1; i >= 0; i--){
            if(j >= 0){
                res.v[i] = this->v[j] + big.v[i];
                j--;
            }
            else
            {
                res.v[i] = big.v[i];
            }
            
            if(res.v[i+1] >= 10){
                int acarreo = res.v[i+1]/10;
                res.v[i + 1] = res.v[i+1]%10;
                res.v[i]+= acarreo; 
            }
        }

             if(res.v[0] >= 10){
            int acarreo  = res.v[0]/10;
            res.v[0] %= 10;

            for(int i = 0; i < this->util + 1; i++){
                res.setPos(i + 1, res.v[i]);
            }

            res.setPos(0,acarreo);
            
            res.setUtil(this->util + 1);

        }

        else
        {
            res.setUtil(this->util);
        }
        
    }
    return res;
}

