#ifndef MATRIZ2D_H
#define	MATRIZ2D_H
#include <iostream>
using namespace std;
class Matriz2D {
private:
   // Dato miembro para acceder a la matriz en si
   int **matriz;
   
   // Dato miembro para almacenar el numero de filas
   int numeroFilas;
   
   // Dato miembro para almacenar el numero de columnas
   int numeroColumnas;
   
public:
   
   // Constructor de la clase
   Matriz2D(int numeroFilas, int numeroColumnas);
   
   // Constructor de copia
   Matriz2D(const Matriz2D & objeto);
   
   // Destructor
   ~Matriz2D();
   
   // Asignar valor a posicion
   void asignarValor(int fila, int columna, int valor);
   
   // Metodo para mostrar por pantalla
   void mostrarPantalla();

   //funcion para mostrar posicion de la matriz
   int getmatriz(int fil,int col);
   
   // Metodo de copia
   Matriz2D * copiarMatriz();
   
   // Metodo para extraer submatriz
   Matriz2D * extrarSubmatriz(int filaIni, int colIni, int filaFin, int colFin);
   
   // Metodo para eliminar fila de la matriz
   void eliminarFila(int fila);
   
   // Metodo para eliminar una columna
   void eliminarColumna(int columna);
};


#endif	/* MATRIZ2D_H */

