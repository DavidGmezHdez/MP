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
       int numerof = filaFin - filaIni;
       int numeroc = colFin - colIni;
       cout<<endl;
       cout<<numerof<<" "<<numeroc<<endl;
       Matriz2D* resultado= new Matriz2D(numerof,numeroc);
       
       for(int i=0;i<numerof;i++){
           for(int j=0;j<numeroc;j++){
               resultado->asignarValor(i,j,matriz[filaIni+i][colFin+j]);
           }
       }
       return resultado;
   }
   
   // Metodo para eliminar fila de la matriz
   void Matriz2D::eliminarFila(int fila){
       delete [] matriz[fila];
   }
   
   // Metodo para eliminar una columna
   void Matriz2D::eliminarColumna(int columna){
       delete [] matriz[columna]; 
   }