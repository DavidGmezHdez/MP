
#include "utilidades.h"


void imprimirArray(double* secuencia, int util){
    for(int i=0;i<util;i++){
        cout<<secuencia[i]<<" ";
    }
    cout<<endl;
}

void eliminarRepetidos(double* array, int &util){

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


void ordenarArray(double* array, int util){
     double temp;
    for (int i=1; i<util; i++){
        for (int j=0 ; j<util - 1; j++){
                if (array[j] > array[j+1]){
                        temp = array[j];
                        array[j] = array[j+1];
                        array[j+1] = temp;
                }
        }
    }
}




int mezclarUnico(double* array1,int util1,double* array2, int util2, double* array3){
    int tamanio = 0;
    eliminarRepetidos(array1,util1);
    eliminarRepetidos(array2,util2);

    for(int i = 0;i<util1;i++){
        array3[i] = array1[i];
    }

    for(int i = 0;i<util2;i++){
        array3[util1 + i]=array2[i];
    }

    tamanio = util1 + util2;
    ordenarArray(array3,tamanio);
    eliminarRepetidos(array3,tamanio);

    return tamanio;
}