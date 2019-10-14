#include <stdio.h>

int main() {
    /*
    Reference - https://www.tutorialspoint.com/cprogramming/c_operators.htm
    
    Basic Operators
        - Unary operators take 1 operand (ex. -5)
        - Binary operators take 2 operands (5 + 5)
        - Ternary operators take 3 operands (ex. ? : operator)
        - Plus and Minus (Unary)
            + Posiive
            - Negative
        - Arithmetic (Binary)
            + Addition
            - Subtraction
            / Division
            * Multiplication
            % Modulus
        - Increment and Decrement Operators (Unary)
            ++ Increases by 1
            -- Decreases by 1
        - Assignment Operators (Binary)
            = Assign New Value
            += Assign Original plus New Value
            -= Assign Original minus New Value 
            /= Assign Original divided by New Value 
            *= Assign Original multiplied by New Value
            %= Assign Original modulo New Value
        - Comparison Operators (Binary)
            == Equal To
            != Not Equal To 
            < Less Than 
            > Greater Than 
            <= Less Than or Equal To 
            >= Greater Than or Equal To
        - Logical Operators (Binary)
            && And 
            || Or 
            ! Not
        - Conditional Operators (Ternary)
            ? :
        - Precedence and Associativity
            - Precedence is primarily using PEMDAS
                - force precedence with ()
            - Associativity is how operators are evaluated if they have the
                same precedence (left-to-right or right-to-left)
    */

    // force precedence with ()
    int y = (2 * 3) + 3; // default
    int x = 2 * (3 + 3); // addition has higher precedence because of ()
    printf("Force precedence with ()\n");
    printf("y = %d\n", y);
    printf("x = %d\n", x);

    // modulo operator : remainder of integer division
    printf("Modulo operator %%\n");
    int c = 10  % 3;
    printf("10 %% 3 = %d\n", c);

    // unary minus 
    printf("Unary minus:\n");
    int a = 5;
    int b = -a;
    printf("a = %d\n", a); // a doesn't change
    printf("b = %d\n", b);

    // post increment 
    printf("Post increment:\n");
    a = 5;
    b = 5;
    b = a++;
    printf("b = %d\n", b); // b gets assigned first
    printf("a = %d\n", a); // then a is incremented

    // pre increment
    printf("Pre increment:\n");
    a = 5;
    b = 5;
    b = ++a;
    printf("a = %d\n", a); // a is incremented first
    printf("b = %d\n", b); // b gets assigned second

    // assignment operators 
    printf("Assignment operators:\n");
    a = 5;
    b = 5;
    b += a;
    printf("b += a = %d\n", b); // b = b + a
    a *= 30;
    printf("a *= 30 = %d\n", a); // a = a * 30
    a %= 140;
    printf("a %%= 140 = %d\n", a); // a = a % 140
 
    return 0;
}