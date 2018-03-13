Ejercicio 4: Probar con un orden "raro"

Si estás leyendo esto es porque resolviste los ejercicios 1, 2 y 3, y alguno de los profes te
dio el ok para seguir con el 4. En la carpeta ayed2_2018/semana01/lab/ejercicios/ej4
disponés del siguiente archivo:

README4.txt : es el archivo que estás viendo.

para continuar, copiá los archivos array_helpers.h, array_helpers.c, sort.h, sort.c y main.c
del ejercicio 3.

No te olvides de cerrar los archivos en los que estabas trabajando durante el ejercicio 3
para no confundirte con los de este ejercicio; los archivos tienen los mismos nombres.

a) En esta parte del ejercicio consiste en modificar tu implementación de la función

static bool goes_before(int x, int y) {
    /* needs new implementation */
}

en el archivo sort.c, para que el programa ordene en orden no decreciente de los
valores absolutos de los números. En caso de haber dos números diferentes de igual
valor absoluto debe ir primero el negativo.

Compila como en los ejercicios anteriores 

gcc -Wall -Werror -Wextra -pedantic -std=c99 -c array_helpers.c sort.c
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o sorter *.o main.c

y corré ejecutando

./sorter ../input/example-unsorted.in

y con los demás archivos de la carpeta ../input

b) Comprobar la Indentación de tú código

La indentación es solo uno de los aspectos de estilos de código en programación que varia según el leenguaje, 
organización, comunidad, etc. En particular la indentación ayuda a que el código sea más legible.
Algunos ejemplos de convenciones de indentación que mimimamente deberan seguir a lo largo de todo el laboratorio son:
- Se deben emplear cuatro espacios como unidad de indentación.
- Evitar las líneas de más de 80 caracteres

En esta parte del ejercicio utilice la herramienta indent para identar usando el estilo -kr (que se utiliza en el libro "The C Programming Language").
Para ello ejecute:

indent -kr main.c -o main.out
indent -kr sort.c -o sort.out

Compare los archivos de salida *.out con sus archivos fuentes (usando diff) y modifique la indentación de su código *.c de ser necesario.

Finalmente comprobá que el programa siga compilando y funcionando.

Nota: En el siguienete enlace puedes obtener más información del estilo -kr: https://www.gnu.org/software/indent/manual/indent.html#IDX17

Mostrale lo que hiciste a alguno de los profes y luego terminaste con el lab de la primera
semana.

