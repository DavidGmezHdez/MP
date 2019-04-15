#include "utilidades.h"


void imprimir(int *secuencia, int util){
    for(int i=0;i<util;i++){
        cout<<secuencia[i]<<" ";
    }
    cout<<endl;
}

void imprimir(int **secuencia, int util){
    for(int i=0;i<util;i++){
        cout<<*secuencia[i]<<" ";
    }
    cout << endl;
}


void ordenarPunteros(int *array, int **parray, int util){
    int *temp;
    for(int i=0;i<util;i++){
        *parray[i] = array[i];
    }

    for (int i=1;i<util; i++){
            for (int j=0 ; j<util - 1; j++)
                if (*parray[j] > *parray[j+1] ){
                        temp = parray[j];
                        parray[j] = parray[j+1];
                        parray[j+1] = temp;
                }
    }
}