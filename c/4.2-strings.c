#include <stdio.h>
#include <string.h> // strings library

int main() {
    char name[20]; // need to save 1 spot for '\0' null terminator
    printf("Name: ");
    scanf("%19s", name);

    // Finding the length of a string
    int length = 0;
    // iterate through the string until the null character is encountered
    while (name[length] != '\0') {
        length++;
    }
    printf("The length of the name %s is %d\n", name, length);

    /* 
    string.h functions 
    */

    // strlen(str) gives the length of the given string
    printf("Size of the name is %lu\n", strlen(name));

    // comparing strings
    // strcmp(str1, str2) outputs 0 is the 2 strings are equal
        // 1 if the 2 strings are not equal
    // the == equal operator would compare the positions of the strings 
        // in memory rather than the values inside them 
    if (strcmp(name, "David") == 0) {
        printf("The name is David\n");
    }

    // copying strings
    // strcpy(copy, src) copies the src string to the copy string
    char copy[20];
    strcpy(copy, name);
    printf("Copy of name: %s\n", copy);

    // concatenation
    // strcat(str1, str2) appends str2 to the end of str1
    char lastName[] = " Ghost";
    strcat(copy, lastName);
    printf("Full name: %s\n", copy);

    return 0;
}