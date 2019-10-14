#include <stdio.h>

#define rows 3 // defined constant 
#define columns 4 // defined constant

int main() {
    /*
    Arrays
        - An array is a collection of data of the same type
        - An array can have a set number of data values that is 
            given at initialization
        - Array elements are initialized to a random number if no value 
            is initially provided
    */
    // declaring an array 
    int ages[10]; // need to specify the size
    // first element has index 0
    // last element has index (size - 1)
    // adding a value to an array 
    int agesAlt[] = {1, 2, 3, 4, 5};

    // printing an array 
    int size = sizeof(agesAlt) / sizeof(agesAlt[0]);
    for (int i = 0; i < size; i++) {
        printf("%d\n", agesAlt[i]);
    }

    // multi-dimensionanl Arrays
    // columns needs to be a constant value
    int studentGrades[][columns] = {
        {1, 2, 3, 4},
        {3, 2, 4, 5},
        {32, 2, 4, 9}
    };

    // printing multi-dimensional arrays
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", studentGrades[i][j]);
        }
        printf("\n");
    }
    return 0;
}