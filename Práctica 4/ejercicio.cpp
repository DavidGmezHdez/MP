/*En un fichero de texto como el mostrado en la imagen se
tienen recogidos los votos emitidos para un partido polı́tico (A, B, C, ..., H)
desde distintas mesas indicando en la pimera fila del fichero el número de
entradas que contiene el fichero. Cada entrada se compone de una letra
(’A’ - ’ H’) que representa al partido votado y de un número que indica el
número de votos emitidos para ese partido.

Se pide construir un programa que lea desde el teclado el nombre del
fichero de datos, abra el fichero, lea los datos, contabilice el número total
de votos acumulado por cada partido, y muestre los resultados en orden
alfabético por el nombre del partido.
Ampliar el ejercicio 1 para guardar la salida en un fichero de
texto en vez de mostrarla por pantalla.
*/



#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Partido{
  char nombre;
  int votos;
};

int posicion(vector<Partido> &v, char nombre){
  int resultado = -1;
  bool salida = false;
  for(int i=0;i<v.size() && !salida;i++){
    if(v[i].nombre == nombre)
      resultado = i;
      salida = true;
  }
  return resultado;
}


void eliminaRepetidos(vector<char>&v){
  int i,j,k;
  for(i=0;i<v.size();i++){
    j = i+1;
    do{
        if(v[j]==v[i]){
          for(k=j+1;k<v.size();k++){
            v[k-1]=v[k];
          }
        v.resize(v.size()-1);
        }
        else
          j++;
    }while(j<v.size());
  }
}

void cambio(char a, char b){
  char tmp = a;
  a=b;
  b=tmp;
}

void OrdenarCaracteres(vector<char>&v){
  for(int i=0;i<v.size();i++){
    for(int j=0;j<v.size();j++){
      if(v[i>v[j]])
        cambio(v[i],v[j]);
    }
  }
}



int main(int argc, char * argv[]){
      ifstream fentrada;
      ofstream fsalida;

      string fichero;
      cout<<"Introduce el fichero con los datos de las elecciones: ";
      cin>>fichero;
      fentrada.open(fichero);
      if (fentrada){
      int totales;
      vector<Partido> resultados;    
      vector<char> auxiliares;
      vector<Partido>auxiliar;
      Partido aux;
      fentrada >> totales;
      while(!fentrada.eof()){
        fentrada >> aux.nombre;
        fentrada >> aux.votos;
        auxiliares.push_back(aux.nombre);
        auxiliar.push_back(aux);
      }
      eliminaRepetidos(auxiliares);
      OrdenarCaracteres(auxiliares);
      for(int i=0;i<auxiliares.size();i++){
        aux.nombre = auxiliares[i];
        aux.votos = 0;
        for(int j=0;j<auxiliar.size();j++){
          if(aux.nombre == auxiliar[j].nombre)
            aux.votos+=auxiliar[j].votos;
        }

        resultados.push_back(aux);
      }

      fsalida.open("salida.txt");
      if(fsalida){
        fsalida<<"El numero de votos totales ha sido de "<<totales<<" votos"<<endl;
        for(int i=0;i<resultados.size();i++){
          fsalida<<"El partido "<<resultados[i].nombre <<" ha obtenido "<<resultados[i].votos <<" votos"<<endl;
        }
      }
      else
        cout<<"Error al abrir el archivo"<<endl;
    }
    else
    {
      cout<<"Error al abrir el archivo"<<endl;
    }
    
}



