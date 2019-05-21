#include "Skyline.h"

Skyline::Skyline(int tamanio){
    this->n = tamanio;
    this->nedificios = 0;
    abcisas= new double[n];
    alturas = new double[n];
}

Skyline::~Skyline(){
    this->n = 0;
    this->nedificios = 0;
    delete [] abcisas;
    delete [] alturas;
}

Skyline::Skyline(const Skyline &skyline){
    this->n = skyline.n;
    for(int i=0;i<n;i++){
        this->abcisas[i] = skyline.abcisas[i];
        this->alturas[i] = skyline.alturas[i];
    }
}


void Skyline::aniadirEdificio(double final, double altura){
    alturas[nedificios] = altura;
    this->nedificios+=1;
    abcisas[nedificios] = final;
}

void Skyline::eliminarRepetidos(double* array, int &util){
  for(int i=0; i<util; i++){
        for(int j=i+1; j<util; j++){
            if(array[i] == array[j])
            {
                for(int k=j; k<util; k++){
                    array[k] = array[k + 1];
                }
                util--;
                j--;
            }
        }
    }
}

int Skyline::getnEdificios(){
    return nedificios;
}

void Skyline::mostrarSkyline(){
    int contador = 0;
    bool salida = false;
    //eliminarRepetidos(abcisas,n);
    cout<<"Tamaño n "<<n<<endl;
    cout<<"Numero edificios "<<nedificios<<endl;
    for(int i=1;i<=n && !salida;i++){
        contador++;
        cout<<"Edificio "<<i<<" Comienzo: "<<abcisas[i-1]<<" Final: "<<abcisas[i]<<" Altura: "<<alturas[contador-1]<<endl;
        if(contador == nedificios)
            salida = true;
    }
    
}
bool Skyline::operator[](int n){
    if(n<=0){
        cerr<<"Error: n solo puede ser 1"<<endl;
        return false;
    }
    else{
        cout<<"Edificio "<<n<<" Comienzo: "<<this->abcisas[n-1]<<" Final:"<<this->abcisas[n]<<"Altura: "<<alturas[n-1]<<endl;
        return true;
    }

}