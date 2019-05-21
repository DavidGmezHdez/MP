#include "Matriz2D.h"

 // Constructor de la clase
   Matriz2D::Matriz2D(int numeroFilas, int numeroColumnas){
       this->numeroFilas = numeroFilas;
       this->numeroColumnas = numeroColumnas;
       matriz = new int* [numeroFilas];
       for(int i=0;i<numeroColumnas;i++){
           matriz[i]=new int [numeroColumnas];
       }

       for(int i=0;i<numeroFilas;i++){
           for(int j=0;j<numeroColumnas;j++){
               matriz[i][j] = 0;
           }
       }
   }
   

   // Constructor de copia
   Matriz2D::Matriz2D(const Matriz2D & objeto){
       numeroFilas = objeto.numeroFilas;
       numeroColumnas = objeto.numeroColumnas;
        this->matriz = objeto.matriz;
   }
   
   // Destructor
   Matriz2D::~Matriz2D(){
       for(int i=0;i<numeroFilas;i++){
           delete [] matriz[i];
       }
       delete [] matriz;    
   }
   
      //funcion para mostrar posicion de la matriz
    int Matriz2D::getmatriz(int fil,int col){
        return matriz[fil][col];
    }
   
   // Asignar valor a posicion
   void Matriz2D::asignarValor(int fila, int columna, int valor){
       matriz[fila][columna] = valor;
   }
   
   // Metodo para mostrar por pantalla
   void Matriz2D::mostrarPantalla(){
       for(int i=0;i<numeroFilas;i++){
           for(int j=0;j<numeroColumnas;j++){
               cout<<matriz[i][j]<<" ";
           }
           cout<<endl;
       }
   }


   // Metodo de copia
   Matriz2D * Matriz2D::copiarMatriz(){
        Matriz2D * resultado=new Matriz2D(numeroFilas,numeroColumnas);
        for (int i = 0; i <numeroFilas; i++) {
            for (int j = 0; j < numeroColumnas; j++) {
                resultado->asignarValor(i,j, matriz[i][j]);
            }
        }
        return resultado;
   }
   
   // Metodo para extraer submatriz
   Matriz2D * Matriz2D::extrarSubmatriz(int filaIni, int colIni, int filaFin, int colFin){
       int numerof = filaFin - filaIni + 1;
       int numeroc = colFin - colIni + 1;
       Matriz2D* resultado= new Matriz2D(numerof,numeroc);
       
       for(int i=0;i<numerof;i++){
           for(int j=0;j<numeroc;j++){
               resultado->asignarValor(i,j,matriz[filaIni+i][colIni+j]);
           }
       }
       return resultado;
   }
   
   // Metodo para eliminar fila de la matriz
   void Matriz2D::eliminarFila(int fila){
       int **matrizaux = new int*[numeroFilas-1];
       for(int i=0;i<numeroFilas;i++){
           matrizaux[i] = new int[numeroColumnas];
       }

       for(int i=0;i<fila;i++){
           for(int j=0;j<numeroColumnas;j++){
               matrizaux[i][j] = matriz[i][j];
           }
       }

       for(int i= fila+1;i<numeroFilas;i++){
           for(int j=0;j<numeroColumnas;j++){
               matrizaux[i-1][j] = matriz[i][j];
           }
       }

       delete [] matriz[0];
       delete [] matriz;
       matriz = matrizaux;
       numeroFilas--;
   }
   
   // Metodo para eliminar una columna
   void Matriz2D::eliminarColumna(int columna){
        int **matrizaux = new int*[numeroFilas];
        int contador = 0;
        for(int i=0;i<numeroFilas;i++){
           matrizaux[i] = new int[numeroColumnas-1];
        }

        numeroColumnas--;
        for(int i=0;i<numeroFilas;i++){
            contador=0;
            for(int j=0;j<columna;j++){
                matrizaux[i][j]=matriz[i][j];
                contador++;
            }
        }

        if(contador<numeroColumnas){
            for(int i=0;i<numeroFilas;i++){
                for(int j=columna;j<numeroColumnas;j++){
                    matrizaux[i][j] = matriz[i][j+1];
                }
            }
        }

    for(int i=0;i<numeroFilas;i++){
           delete [] matriz[i];
       }

       delete [] matriz;

    matriz = matrizaux;
   }