    #include "utilidades.h"

    using namespace std;

    void mostrarContenido(Valor v[], int n){
        for(int i=0;i<n;i++){
            cout<<"{ "<<v[i].getFila()<<" , "<<v[i].getColumna() <<" , "<<v[i].getValor()<<" }    ";
        }
        cout<< endl;
    }


    int combinarSuma(Valor v1[], int n1, Valor v2[], int n2, Valor resultado[], int n3){
        int posicion = 0;
        Valor auxiliar;
        bool salida;

        for(int i=0;i<n1;i++){
            auxiliar = v1[i];
            salida = false;
            for(int j=0;j<n3 && !salida;j++){
                if((resultado[j].getFila()==auxiliar.getFila()) && (resultado[j].getColumna() == auxiliar.getColumna()) ){
                    resultado[j].setValor(resultado[j].getValor() + auxiliar.getValor());
                    salida = true;
                }
            }
            if(!salida){
                resultado[posicion]=auxiliar;
                posicion++;
            }
        }
        for(int i=0;i<n2;i++){
            auxiliar = v2[i];
            salida = false;
            for(int j=0;j<n3 && !salida;j++){
                if((resultado[j].getFila()==auxiliar.getFila()) && (resultado[j].getColumna() == auxiliar.getColumna()) ){
                    resultado[j].setValor(resultado[j].getValor() + auxiliar.getValor());
                    salida = true;
                }
            }
            if(!salida){
                resultado[posicion]=auxiliar;
                posicion++;
            }
    }

    return posicion;
}