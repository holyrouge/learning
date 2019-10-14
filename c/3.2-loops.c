#include <stdio.h>

int main() {
    /*
    Parts of a Loop
        - Initialization of a variable
        - Comparison against the variable 
        - Update the variable
    */

    // for loop
    // in some versions of C, i needs to be declared before the for loop
    for (int i = 0; i < 10; i++) { // can change up the incrementation of i
    // can use this to iterate through an array
       printf("%d\n", i);
    }
    
    // calculate the size of an array and other data
    int ages[] = {5, 3, 45};
    // sizeof gives the number of bytes used by the data
    // by dividing the number of bytes of the array by the number of bytes of
        // one array element, you can get the number of elements in the array
    // this will not work for arrays that sent to a function as an argument
        // because the array decays to its pointer, so &array needs to be used
        // to get its correct sizeof() value
    int sizeOfArray = sizeof(ages) / sizeof(ages[0]);
    for (int i = 0; i < sizeOfArray; i++) {
        printf("ages[%d] = %d\n", i, ages[i]);
    }

    // loops can be placed inside of each other 
    for (int i = 0; i < 10; i++) {
        for (int j = i; j >= 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    // while loop
    int k = 0;
    while (k < 10) {
        printf("%d\n", k);
        k++;
    }
    
    // do/while loop 
    int input;
    do { 
    // the code in the do block will run at least once regardless
        // of the while condition
    // can be used for menus to ask a user for an input until the input is valid
        printf("Choose a number between 0 and 9: ");
        scanf("%d", &input);
    }
    while (input < 0 || input > 9);

    return 0;
}