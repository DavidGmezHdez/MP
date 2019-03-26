EJERCICIOS REALIZADOS PRÁCTICA 2 METODOLOGÍA DE LA PROGRAMACIÓN - GRADO INGENIERÍA INFORMÁTICA - UGR

* EJERCICIO 1
    Implemente una función llamada mezclar que cumpla las siguientes indicaciones:
        * recibe como argumentos (sólo se indican los argumentos esenciales; podéis agregar
        todos aquellos que consideréis oportunos):
                * dos arrays de bajo nivel, de tipo double, que contienen valores ordenados
                y sin repetir (aunque sı́ podrı́a haber valores que aparezcan en ambos). La
                función debe combinar el contenido de estos arrays, de forma que el resultado
                sea una secuencia de valores ordenados y sin repetidos
                * un tercer array, resultado, donde se almacena el resultado del procesamiento
                de la función. Puede asumirse que este array está dimensionado para poder
                contener todos los valores necesarios
    La función devolverá un valor entero que indique el número de valores almacenados
en el array resultante.

* EJERCICIO 2
    Programe una función llamada combinarSuma que reciba como argumento dos
    vectores C de tipo Valor y produce como resultado otro vector del mismo tipo.

    Como ejemplo, imaginemos que en el primer array aparece el objeto con valores
    fila=1, columna=1, valor=0.5 y en el segundo el objeto con contenido fila=1, co-
    lumna=1, valor=7.3. Entonces el objeto a almacenar en el array resultante serı́a
    fila=1, columna=1, valor=7.8.

* EJERCICIO 4

    Implemente una función que reciba como entrada dos cadenas de caracteres estilo
    C y compruebe si la segunda cadena está contenida en la primera. En caso afirmativo,
    devolverá la posición en que se encuentra; en caso contrario devuelve -1.

* EJERCICIO 5 
    Implemente una función que inserte una cadena de caracteres dentro de otra cadena,
    en una determinada posición.

* EJERCICIO 6
    Programe una función que realice el producto de dos matrices. Debe facilitarse a su
    vez una función que permita visualizar el contenido de una matriz para comprobar el
    correcto funcionamiento del código realizado.

* EJERCICIO 8
    Supongamos que se eligen dos puntos de forma aleatoria, con distribución uniforme,
    en el cuadrado unitario [0, 1] 2 . Escribid un programa que estime la longitud media es-
    perada del segmento que une a ambos puntos. Para ello se seleccionarán muchos pares
    de puntos diferentes (100000, por ejemplo) y el programa ofrecerá como resultado la
    longitud media de las distancias calculadas para cada par de puntos. Los resultados de
    cada prueba (cada par de puntos produce una distancia) se almacenarán en un array.
    
    La implementación se basará en usar una clase llamada EstimadorDistancia que
    contendrá los elementos necesarios para resolver este problema. Se ofrece la implemen-
    tación base de la clase, dejando sin implementar las partes que aparecen con puntos
    suspensivos.
    
    No se ofrecen en este caso casos de prueba, ya que la naturaleza aleatoria del programa
    producirá resultados diferentes cada vez que se ejecute el programa. Observad también
    que el programa principal para este ejercicio debe invocarse con un argumento, que
    permitirá especificar el número de muestras o pares de puntos a generar (se incluye la
    lı́nea de comando necesario para ejecutar desde linux; el ejemplo ejecutarı́a el programa
    de forma que la distancia media obtenida se ofreciese como la estimación de la distancia
    entre 10000 pares de puntos):