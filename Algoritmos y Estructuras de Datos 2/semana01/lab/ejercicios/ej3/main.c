/* First, the standard lib includes, alphabetically ordered */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Then, this project's includes, alphabetically ordered */
#include "array_helpers.h"
#include "sort.h"

/* Maximum allowed length of the array */
#define MAX_SIZE 100000

double getMilliseconds( ) {
    return 1000.0 * clock( ) / CLOCKS_PER_SEC;
}

void print_help(char *program_name) {
    /* Print the usage help of this program. */
    printf("Usage: %s <input file path>\n\n"
           "Sort an array given in a file in disk.\n"
           "\n"
           "The input file must have the following format:\n"
           " * The first line must contain only a positive integer,"
           " which is the length of the array.\n"
           " * The second line must contain the members of the array"
           " separated by one or more spaces. Each member must be an integer."
           "\n\n"
           "In other words, the file format is:\n"
           "<amount of array elements>\n"
           "<array elem 1> <array elem 2> ... <array elem N>\n\n",
           program_name);
}

char *parse_filepath(int argc, char *argv[]) {
    /* Parse the filepath given by command line argument. */
    char *result = NULL;

    if (argc < 2) {
        print_help(argv[0]);
        exit(EXIT_FAILURE);
    }

    result = argv[1];

    return (result);
}

int main(int argc, char *argv[]) {
    char *filepath = NULL;

    double elapsed;
    elapsed = getMilliseconds();

    /* parse the filepath given in command line arguments */
    filepath = parse_filepath(argc, argv);
    
    /* create an array of MAX_SIZE elements */
    int array[MAX_SIZE];
    
    /* parse the file to fill the array and obtain the actual length */
    unsigned int length = array_from_file(array, MAX_SIZE, filepath);

    /* create a copy of the array, to do some checks later */
    int copy[MAX_SIZE];
    array_copy(copy, array, length);
    
    /* do the actual sorting */
    selection_sort(array, length);

    /* show the ordered array in the screen */
    array_dump(array, length);
    
    /* check if it is sorted */
    assert(array_is_sorted(array, length));
    /* check if it is a permutation of original */
    /* Needs implementation */
    elapsed = getMilliseconds() - elapsed;
    printf("\nElapsed milliseconds = %g\n", elapsed);

    return (EXIT_SUCCESS);
}
