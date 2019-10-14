/*
Library file of C functions
*/
#include <stdio.h>
#include <math.h>
// add custom header file
    // using the quotes will search for the file in the same directory
#include "5.2-libraries.h"

int power(int num, int expo) {
    return pow(num, expo);
}

// void functions do not return a value
void changeVal(int *input) { // use * to have the argument be a pointer
    // with the pointer argument, the original value can be changed
        // within  the function
    *input = 10; // change the value of input in memory
}

// recursion
int recursivePower(int num, int expo) {
    // base case stops the recursion 
    if (expo < 1) {
        return 1;
    }
    // in recursive, the function is called multiple times until the base case
    return num * recursivePower(num , expo - 1);
}

// for functions that take arrays as input, the size of the arrays should
    // also be arguments for the function
int largestValue(int ages[], int size) {
    int max = ages[0];
    for (int i = 1; i < size; i++) {
        if (max < ages[i]) {
            max = ages[i];
        }
    }
    return max;
}