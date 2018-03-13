Ejercicio 1: 

En la carpeta ayed2_2018/semana01/lab/ejercicios/ej1
disponés de los siguientes archivos:

README1.txt : es el archivo que estás viendo.
array_helpers.h : contiene descripciones de funciones auxiliares para manipular arreglos.
array_helpers.c : contiene implementaciones de dichas funciones.
sort.h : contiene descripciones de las funciones selection_sort y array_is_sorted
sort.c : contiene una implementación de selection_sort pero no de array_is_sorted
main.c : contiene al programa principal que carga un arreglo de números,
         luego lo ordena con la función selection_sort,
         entonces muestra la longitud del arreglo junto con sus elementos y 
         finalmente comprueba que el arreglo esta ordenado.

a) Implementación de la función array_is_sorted en sort.c

Para esta parte es necesario que abras el archivo sort.c e implementes la función
array_is_sorted. Para guiarte, no dudes en estudiar el resto del archivo sort.c,
principalmente la implementación del selection sort, y la definición del algoritmo
array_is_sorted que hiciste durante el práctico del lunes.

b) Comprobar que el arreglo ordenado es una permutación de arreglo original en main.c

Para esta parte es necesario que abras el archivo main.c y al final de la función main (antes del return)
compruebes que el arreglo ordenado sea una permutación del arreglo que se cargó inicialmente. Para guiarte
primero debes identificar los arreglos (el ordenado y el original), luego llamar a la función array_is_permutation_of 
(ya implementada en array_helpers.c) y finalmente mostrar un mensaje resultante de la comprobación.

Una vez implementados los incisos a) y b), compilá ejecutando

gcc -Wall -Werror -Wextra -pedantic -std=c99 -c array_helpers.c sort.c

Si reporta algún error, revisá tu código y volvé a ejecutar la línea de arriba.
Una vez que esa línea se ejecuta sin reportar errores, ejecutá

gcc -Wall -Werror -Wextra -pedantic -std=c99 -o sorter *.o main.c

y ya podés correr el programa, ejecutando

./sorter ../input/example-unsorted.in

Si anda bien, probá con otros archivos de la carpeta ../input
no te olvides de probar con el archivo ../input/empty.in

Mostrale lo que hiciste a alguno de los profes y luego pasá al ejercicio 2 haciendo

cd ../ej2

y abrí el archivo README2.txt

