#include "utilidades.h"
using namespace std;

bool buscarVector(const double v[],int n, double x){
    bool encontrado = false;
    for(int i=0;i<n && !encontrado;i++){
        if (v[i]==x)
            encontrado = true;
    }

    return encontrado;
}


void ordenarVector(double v[],int n){
    double temp;
 
    for (int i=1; i<n; i++){
        for (int j=0 ; j<n - 1; j++){
                if (v[j] > v[j+1]){
                        temp = v[j];
                        v[j] = v[j+1];
                        v[j+1] = temp;
                }
        }
    }
}

void imprimirArray(double v[], int n){
    for(int i=0;i<n;i++)
        cout<<v[i] << " ";
    
    cout<<endl;
}


int mezclar(const double v1[],int n1, const double v2[],int n2, double resultado[], int n3){
    bool repetido;
    double x;
    int posicion = 0;
    for(int i=0;i<n1;i++){
        x = v1[i];
        repetido = buscarVector(resultado,n3,x);
        if(!repetido){
            resultado[posicion] = x;
            posicion++;
        }
    }
    for(int i=0;i<n1;i++){
        x = v2[i];
        repetido = buscarVector(resultado,n3,x);
        if(!repetido){
            resultado[posicion] = x;
            posicion++;
        }
    }

    //ORDENAMOS EL VECTOR ANTES DE ACABAR
    ordenarVector(resultado,posicion);

    return posicion;
}




