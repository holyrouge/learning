/*
.c file extension for C program files

To Compile:
$ gcc filename.c
    this creates a file called a.out in the folder with the compiled code
        in windows, an .exe file is created instead of .out
    use the -o flag to change the output file name 
    ex : gcc -o outputfile filename.c
$ ./a.out
    this runs the executable file with the compiled code
        in windows, an .exe file is used instead of .out

Every time the file is updated, to see the new output, the file needs to be
    saved, compiled, and the executable file run.
*/

/*
Basics Structure for C programs

#include <stdio.h>  // standard IO library 

int main() {    // main function that runs everything 
    return 0;   // a return of 0 means everything went ok
}
*/

/*
Print Hello, World

#include <stdio.h>  // standard IO library

int main() {
    printf("Hello, World!\n"); // \n for new line
    return 0;
}
*/

/*
Variables

#include <stdio.h>  // standard IO library

int main() {
    int x = 50; // use the integer reference x for 50
    int y; // variable declaration
    y = 10; // variable initialization
    // = is the assignment operator
    return 0;
}
*/

/*
Print Statements

#include <stdio.h>  // standard IO library

int main() {
    // can format strings using string formatting
    // %s can take any string input and place it in the same place as %s
    printf("%s World\n", "Hello");

    // %d for integers, %f for floats and doubles
    int x = 50;
    printf("The value of x is %d\n", x);

    // can use multiple variables with string formatting
    int y = 10;
    printf("X: %d, Y: %d\n", x, y);
    return 0;
}
*/

/* 
User input

#include <stdio.h>  // standard IO library

int main() {
    printf("Radius: ");
    int radius;
    scanf("%d", &radius); // & symbol is used when changing a variable's value 
    // & provides the address of the given variable (pointer)
    printf("The given radius is %d", radius);
    return 0;
}
*/

/*
Strings 

#include <stdio.h>  // standard IO library

int main() {
    // need to use a character array for string 
    char name[20]; // char array of 20 characters
    // need to have one space at the end for '\0' end-of-string operator
    // in this array of 20 characters, only 19 characters can be stored because
    // the last spot is held by '\0'

    printf("Name: ");
    scanf("%19s", name); // specify 19 characters because last spot is '\0'
    // because its an array, the pointer does not need to be specified

    printf("The name is %s", name);

    return 0;
}
*/