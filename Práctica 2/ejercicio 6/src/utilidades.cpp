#include "utilidades.h"

using namespace std;


bool multiplicar(double m1[][COL], int n11, int n12, double m2[][COL], int n21, int n22, double res[][COL],int &nres1, int &nres2){
    bool resultado;

    if(n12 != n21){
        resultado = false;
    }
    else
    {
        nres1= n11;
        nres2=n22;

        for(int i=0;i<n11;i++){
            for(int j=0;j<n22;j++){
                res[i][j]=0;
            }
        }

        for(int i=0;i<n11;i++){
            for(int j=0;j<n22;j++){
                for(int k=0;k<n12;k++){
                    res[i][j]+=m1[i][k] * m2[k][j];
                }
            }
        }

        resultado = true;
    }
    return resultado;
}


void mostrarMatriz(double m[][COL],int n1, int n2){
    for(int i=0;i<n1;i++){
        cout << "{ ";
        for(int j=0;j<n2;j++){
            cout << m[i][j]<< "  ";
        }
        cout<<" }";
        cout<<endl;
    }
}