#include <stdio.h>
#include <math.h> // math library

/*
Functions
    - Functions need to be placed before the functions they are called in
        - All functions need to placed before the main function
    - In a function, the arguments that are passed are copies of the values,
        and not the values themselves
            - this is true unless pointers are used to pass arguments
Variable Scope
    - Variables are only defined within the {} they are created in
        - Global variables can be created that are defined within 
            the entire program
*/

int square(int num) { // functions are given data through arguments
    return num * num;
}

int cube(int num) {
    // the variable out is only defined within cube() 
    int out = num * num * num;
    return out;
}

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

int main() {
    int x = 5;
    // call square() with the argument x and store value in x2
    int x2 = square(x);
    printf("x squared is %d\n", x2);
    
    int y = 10;
    printf("y to the 5th power is %d\n", power(y, 5));
    printf("y to the 5th power is %d\n", recursivePower(y, 2));

    printf("x is %d before changeVal()\n", x);
    changeVal(&x); // pass x as a pointer with & symbol
    printf("x is %d after changeVal()\n", x);

    int ages[] = {1, 4, 5, 23, 45, 2};
    int size = 6;
    printf("Largest value in array: %d\n", largestValue(ages, size));
    return 0;
}