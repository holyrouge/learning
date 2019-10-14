/*
Header file for C functions
    - Includes only the signatures (data type, name, arguments) of the functions
*/
#ifndef HEADER_FILE // if the header file is not defined 
#define HEADER_FILE // define the header file

int power(int num, int expo);
int recursivePower(int num, int expo);
void changeVal(int *input);
int largestValue(int ages[], int size);

#endif // end if statement (header file definition)