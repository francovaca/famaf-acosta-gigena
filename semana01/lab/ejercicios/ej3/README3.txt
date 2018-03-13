Ejercicio 3:

Si estás leyendo esto es porque resolviste los ejercicios 1 y 2, y alguno de los profes te
dio el ok para seguir con el 3. En la carpeta ayed2_2018/semana01/lab/ejercicios/ej3
disponés del siguiente archivo:

README3.txt : es el archivo que estás viendo.

para continuar, copiá los archivos array_helpers.h, array_helpers.c, sort.h, sort.c y main.c
del ejercicio 1.

No te olvides de cerrar los archivos en los que estabas trabajando durante el ejercicio 2
para no confundirte con los de este ejercicio; los archivos tienen los mismos nombres.

a) Generalizar la comparación. En esta parte del ejercicio consiste en agregar la función

static bool goes_before(int x, int y) {
    /* needs implementation */
}

en el archivo sort.c, y reemplazar todas las comparaciones entre elementos del arreglo
que utilizan operadores relacionales, como "<", "<=" por invocaciones adecuadas a la
función goes_before. Implementá goes_before con el orden que prefieras.

¿y qué nombre deberíamos utilizar ahora para las variables y/o funciones auxiliares
ahora que hemos introducido la función goes_before?

b) Calcular el tiempo de ejecución de selection sort.

La libreria time.h provee funciones y constantes para manipular la fecha y hora.
El siguiente fragmento de código es un ejemplo de como usar la libreria time.h para calcular
el tiempo de ejecución de una tarea.

#include <stdio.h>
#include <time.h>

double getMilliseconds( ) {
    return 1000.0 * clock( ) / CLOCKS_PER_SEC;
}

int main ( ) {
    double elapsed;
    elapsed = getMilliseconds();
    ... // perform task
    elapsed = getMilliseconds() - elapsed;
    printf("Elapsed milliseconds = %g\n", elapsed);
    return 0;
} 

Usando esta idea determine el tiempo de ejecución de selection_sort, para esto debes modificar 
la función main del archivo main.c.   

Una vez implementados los incisos a) y b), compila como en los ejercicios anteriores 

gcc -Wall -Werror -Wextra -pedantic -std=c99 -c array_helpers.c sort.c
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o sorter *.o main.c

y corré ejecutando

./sorter ../input/example-unsorted.in

y con los demás archivos de la carpeta ../input 

Mostrale lo que hiciste a alguno de los profes y luego pasá al ejercicio 4 haciendo

cd ../ej4

y abrí el archivo README4.txt
