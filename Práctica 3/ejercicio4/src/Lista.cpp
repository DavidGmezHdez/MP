#include "Lista.h"

 /**
     * Constructor de la clase
     */
    Lista::Lista(){
        this->contenido = new Celda(0);
    }

    /**
     * Metodo para imrimir el contenido de la lista
     */
    void Lista::mostrar(){
       Celda* temporal = contenido;
       temporal=temporal->obtenerSiguiente();
       while(temporal!=0){
           temporal->mostrar();
           temporal=temporal->obtenerSiguiente();
       } 
    }

    /**
     * Metodo para obtener la longitud de la lista
     * @return
     */
    int Lista::obtenerLongitud(){
        Celda *temporal;
        temporal=contenido;
        temporal = temporal->obtenerSiguiente();
        int contador=1;
        
        while(temporal->obtenerSiguiente()!=0){
            contador++;
            temporal=temporal->obtenerSiguiente();
        }
        return contador;
    }

    /**
     * Metodo para aniadir un elemento al final de la lista
     * @param dato
     */
    void Lista::agregarFinal(double dato){
        Celda *temporal;
        temporal = contenido;

        while(temporal->obtenerSiguiente()!=0){
            temporal = temporal->obtenerSiguiente();
        }
        Celda *temporal2 = new Celda(dato);
        temporal->asignarSiguiente(temporal2);
    }

    /**
     * Metodo para insertar un nuevo elemento al inicio de la lista
     * @param dato
     */
    void Lista::agregarInicio(double dato){
        Celda *temporal;
        temporal = contenido;
        temporal=temporal->obtenerSiguiente();
        Celda *temporal2 = new Celda(dato);
        temporal2->asignarSiguiente(temporal);
        contenido->asignarSiguiente(temporal2);
    }

    /**
     * Metodo para imrimir el contenido de la lista
     * en sentido inverso: desde final a inicio
     */
    void Lista::imprimirInvertido(){
        int longitud = 0;
        Celda* temporal = contenido;
        for(int i=longitud;i>0;i++){
            contenido[i].mostrar();
        }
    }

    /**
     * Metodo para eliminar el ultimo elemento de la lista
     */
    void Lista::eliminarFinal(){
        Celda *temporal;
        temporal=contenido;
        temporal=temporal->obtenerSiguiente();
        while(temporal->obtenerSiguiente()->obtenerSiguiente()!=0){
            temporal = temporal->obtenerSiguiente();
        }
        temporal->anularSiguiente();
        
    }

    /**
     * Obtiene la celda que ocupa una determinada posicion
     * de la lista
     * @param posicion
     * @return direccion de la celda o null si no la encuentra
     */
    
    Celda *Lista::obtener(int posicion){
        Celda *temporal = contenido;
        temporal = temporal->obtenerSiguiente();
        for(int i=0;i<posicion;i++){
            temporal = temporal->obtenerSiguiente();
        }
        return temporal;
    }

    /**
     * Metodo para insertar una celda en una determinada posicion
     * @param indice posicion de insercion
     * @param dato dato a insertar
     * @return
     */
    bool Lista::agregarPosicion(int indice, double dato){
        Celda *temporal = contenido;
        temporal = temporal->obtenerSiguiente();
        for(int i=0;i<indice;i++){
            temporal = temporal->obtenerSiguiente();
        }
        temporal->asignarInfo(dato);

    }

    /**
     * Metodo para eliminar todas las celdas de la lista
     */
    void Lista::liberarEspacio(){
        while(contenido!=0){
            Celda *temporal = contenido;
            contenido = temporal->obtenerSiguiente();
            delete temporal;
        }
    }
    