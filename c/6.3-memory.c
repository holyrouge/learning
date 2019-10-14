#include <stdio.h>
#include <stdlib.h> // required for memory functions
#include <stdbool.h>
#include <string.h>

/*
Variables are defined within their scopes (within {} in which they are declared)
    - A static variable remains declared after the end of a function
        - Static variables exist until the end of the program

Dynamic Memory Allocation
    - User requests memory to be allocated and this memory can be used anywhere
        in the code and the memory must be unallocated manually
*/

typedef struct user {
    char name[30];
    int age;
    bool isVerified;
} user;

// returns a pointer to the created user
user *createUser(char name[], int age, bool isVerified) {
    user *newUser = malloc(sizeof(user));
    strcpy(newUser->name, name);
    newUser->age = age;
    newUser->isVerified = isVerified;
    return newUser;
}

void fun() {
    int static x = 0; // static variable remains declared after the end of fun()
    x++;
    printf("x is %d\n", x);
}

int main() {
    // fun();
    // fun();
    // fun();

    // dynamically-sized array
    int size;
    printf("How many int elements?: ");
    scanf("%d", &size);

    // malloc allocates the required memory and returns a pointer to the memory
    // *arr holds the pointer to the start of the allocated memory
    int *arr = malloc(size * sizeof(int));

    // check if memory was allocated correctly
    if (arr == 0) {
        printf("Invalid pointer. Error allocating memory.\n");
    }
    else {
        printf("Memory allocated correctly.\n");
    }

    // ask user for values for array
    for (int i = 0; i < size; i++) {
        printf("Array value: ");
        scanf("%d", &arr[i]); // similar to arrays
    }
    
    // print array 
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    //  unallocate the memory
    free(arr);

    // get a pointer returned from a function
    user *user1 = createUser("David Max", 27, false);
    printf("User's age: %d\n", user1->age);
    free(user1); // unallocate memory

    return 0;
}