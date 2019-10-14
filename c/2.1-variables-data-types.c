#include <stdio.h>
#include <stdbool.h> // standard boolean library
/*
C is a statically-typed programming language
    this means that data types for variables must be stated when they 
    are declared and those variables can only hold data for the specific
    data type they are assigned

Data Types:
    - Integer (int)
    - Double (double) - 64-bit number (double-precision)
    - Float (float) - 32-bit number (single-precision)
    - Character (char) - single character 
    - String (char[]) - character array
    - Bool (bool) - boolean true/false value
        need to include #include <stdbool.h>

Unsigned means that the value is only positive

Legal Identifiers (valid variable names):
    - variable names can't start with a number 
    - capitalization matters (ex. int cats and int CATS are different variables)
        - any capitalization differences is a new variable 
        - C is case-sensitive
    - key words are not allowed to be used as variable names
    - Convention(s)
        - Camel-case (ex. int catsAreOk)
        - _ separation (ex. int cats_are_ok)

Implicit Type Conversion
    - C will automatically convert the value given to a variable to
        to the variable's type (ex. int zero = .999999 will lead to zero = 0)
    - C will truncate the value of variables if the value does not fit

Explicit Type Casting
    - This means that the progammer tells the compiler to change a variable's
        data type from one type to another
*/

int main() {
    int a = 10;
    double b = 10.5; // 64-bit number
    // for sizeof double, use %lu because its a long unsigned value
    // 8 bytes = 64 bits
    printf("The size of double variable b is %lu\n", sizeof(b));
    float c = 10.5; // 32-bit number
    printf("The size of float variable c is %lu\n", sizeof(c));

    char ch = 'a'; // a char stores one character 
    char str[] = "char array"; // a char array is a string
    bool f = false; // boolean with true or false value

    // explicit type casting
    int slices = 17;
    int people = 2;

    // 8.5 type casted to 8 because both variables are integers
    double slicesPerPerson = slices / people;
    printf("%f pizza slices per person before explicit type cast\n", slicesPerPerson);

    // use the key word double to type cast the value to double to get 8.5
    // the value of slices is preserved, but the value in the expression is
        // is changed based on the type casting
    // type casting is a unary operator, so it works only on one operator
    double slicesPerson = (double) slices / people;
    printf("%f pizza slices per person after explicit type cast\n", slicesPerson);

    // only the part of the expression with a double is evaluated with
        // with double arithmetic
    double test1 = 25 / 2 * 2; // 24.0
    double test2 = 25 / 2 * 2.0; // 24.0
    double test3 = 25 / 2.0 * 2; // 25.0
    double test4 = (double) 25 / 2 * 2; // 25.0
    printf("test1: %f, test2: %f, test3: %f, test4: %f\n", 
    test1, test2, test3, test4);
    return 0;
}