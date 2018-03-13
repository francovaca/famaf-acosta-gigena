Ejercicio 2: 

Si estás leyendo esto es porque resolviste el ejercicio 1, y alguno de los profes te
dio el ok para seguir con el 2. En la carpeta ayed2_2018/semana01/lab/ejercicios/ej2
disponés del siguiente archivo:

README2.txt : es el archivo que estás viendo.

para continuar, copiá los archivos array_helpers.h, array_helpers.c, sort.h, sort.c y main.c
del ejercicio 1 con la implementación que realizaste, por ejemplo el sort.c tiene tu implementación 
de la función array_is_sorted.

Para copiarlos podés hacer
(atención: tené cuidado de copiar la línea entera inclusive el último punto)

cd ej2
cp ../ej1/*.h .
cp ../ej1/*.c .

No te olvides de cerrar los archivos en los que estabas trabajando durante el ejercicio 1
para no confundirte con los de este ejercicio; los archivos tienen los mismos nombres.

Este ejercicio consiste en modificar lo que haga falta para que el programa ordene 
"de menor a mayor" o "de mayor a menor".

a) En el archivo sort.c (y en sort.h) modificar las funciones selection_sort y array_is_sorted 
agregando un nuevo parámetro "order", como se indica a continuación:

bool array_is_sorted(int array[], unsigned int length, bool order);
void selection_sort(int a[], unsigned int length, bool order);

donde si order es false entonces se debe ordenar de menor a mayor
y si order es true entonces se debe ordenar mayor a menor.

Agregar nuevas funciones si es necesario, por ejemplo, max_pos_from

b) Modificar el archivo main.c para que primero ordene con selection_sort de menor a mayor y 
luego ordene con selection_sort de mayor a menor.

Como en el ejercicio 1, una vez implementados los incisos a) y b) tenés que compilar ejecutando

gcc -Wall -Werror -Wextra -pedantic -std=c99 -c array_helpers.c sort.c

y revisando tu código hasta que no haya errores.
Y luego ejecutando

gcc -Wall -Werror -Wextra -pedantic -std=c99 -o sorter *.o main.c

y corriendo el programa con la ejecución de

./sorter ../input/example-unsorted.in

Si anda bien, probá con otros archivos de la carpeta ../input
no te olvides de probar con el archivo ../input/empty.in

Mostrale lo que hiciste a alguno de los profes y luego pasá al ejercicio 3 haciendo

cd ../ej3

y abrí el archivo README3.txt

