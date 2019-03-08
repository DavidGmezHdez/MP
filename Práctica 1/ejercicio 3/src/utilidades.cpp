#include "utilidades.h"

using namespace std;

void obtenerMayorSecuenciaMonotonaCreciente(const int v[], int n1, int resultado[], int& n2){
    bool salida;
    int auxiliar;
    int posicion = 0;
    int mayor = 0;
    int tamanio = 0;
    for(int i = 0;i<n1;i++){
        
        if(v[i]<=){
            auxiliar++;
        }
        else if(auxiliar>mayor){
            posicion = i;
            tamanio = auxiliar;
            auxiliar=0;
        }
    }
    int contador = 0;
    n2 = tamanio;
    bool sal = false;
    for(int k = posicion;!sal;k++){
        resultado[contador] = v[k];
        contador++;
        if (contador == tamanio)
            sal = true;
    }
}

void imprimirArray(int v[], int n){
    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

/* REALIZO ESTA FUNCION PARA LIMPIAR EL VECTOR RESULTADO TRAS HABERLO LLENADO DE ELEMENTOS CON LA OPERACIÓN DE LA SECUENCIA, AYQ UE AL SER EL MISMO PARA 
LOS 3 CASOS, HAYQ UE ELIMINAR LOS ELEMENTOS QUE TIENE PARA AVANZAR AL SIGUIENTE CASO. ESTA FUNCION SE LLAMARÁ TRAS IMPRIMIR EL VECTOR RESULTADO EN EL MAIN*/
void limpiarArray(int v[],int n){
    for(int i = 0;i<n;i++){
        v[i]=-1;
    }
}

