// add custom header file
    // using the quotes will search for the file in the same directory
#include <stdio.h>
#include "5.2-libraries.h"

/*
Compiling C programs with libraries
    - Compile C files
        $ gcc -c 5.2-libraries.c
        $ gcc -c 5.2-libraries-main.c
    - Combine into one executable
        $ gcc 5.2-libraries.o 5.2-libraries-main.o
    - Run executable (.exe for windows)
        $ ./a.o
    - Combined one-line command
        $ gcc -c 5.2-libraries.c 5.2-libraries-main.c && ./a.o
*/

int main() {    
    int y = 10;
    printf("y to the 5th power is %d\n", power(y, 5));
    printf("y to the 5th power is %d\n", recursivePower(y, 2));

    int x = 5;
    printf("x is %d before changeVal()\n", x);
    changeVal(&x); // pass x as a pointer with & symbol
    printf("x is %d after changeVal()\n", x);

    int ages[] = {1, 4, 5, 23, 45, 2};
    int size = 6;
    printf("Largest value in array: %d\n", largestValue(ages, size));
    return 0;
}