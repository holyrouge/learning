#include <stdio.h>

// square takes an input and updates input with its squared value
void square(int *input) {
    *input *= *input;
}

void sizeArr(int arr[]) {
    // this measures the size of the pointer and not the size of the array
    printf("Size of Array in size(): %lu\n", sizeof(arr));
}

int main() {
    // creating a pointer
    int a = 100;
    // * symbol declares a pointer 
    // & points to the pointer of a variable
    int *b = &a; // b stores the location of a
    
    printf("a = %d\n", a);
    // * means to dereference a pointer here, which means to get the value
        // at the pointer
    printf("*b = %d\n", *b);

    *b = 50; // can change a through the pointer b
    printf("a = %d\n", a);
    printf("*b = %d\n", *b);

    // the value of b and the value that b points to are 2 different things
    int c = 6000;
    b = &c; // b now points to c

    int x = 5;
    square(&x);
    printf("Square of X: %d\n", x);

    // when arrays are passed to a function, a pointer to the array is passed
    // because of this, the size should be passed to the function
    int size = 4;
    int arr[] = {1, 2, 3, 4};

    printf("Size of Array: %lu\n", sizeof(arr));
    // sizeArr(arr);

    return 0;
}