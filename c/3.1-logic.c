#include <stdio.h>
#include <stdbool.h>

int main() {
    // if statement
    if (true) { // if expression is true, code block is run
        // code block
        printf("This is true\n");
    }

    // if/else statement
    int age = 17;
    if (age > 17) {
        printf("This is an adult\n");
    }
    else { // else block will run if no 'if' expression is true
        printf("This is not an adult\n");
    }

    // not operator : !
    if (!(age > 17)) { // not operator gives the opposite of the boolean value
        printf("This is not an adult because of not\n");
    }
    else {
        printf("This is an adult because of not\n");
    }

    // and operator : &&
    double money = 30000;
    if (age > 17 && money > 25000) {
        // code block will run if both age > 17 and money > 25000 are true
            // because of the && operator
        printf("This is a successful adult\n");
    }

    // or operator : ||
    if (age > 17 || money > 25000) {
        // code block will run if either age > 17 or money > 25000 is true
            // because of the || operator
        printf("This is a successful person\n");
    }

    // if/else if/else statement
    if (age > 12) {
        printf("This is a kid\n");
    }
    else if (age > 20) {
        printf("This is an adult because of else if\n");
    }
    else {
        printf("This is a person because of else if\n");
    }

    // one line if statement 
        // can only perform one statement after one line if statement without {}
    if (age < 150) printf("You might be alive\n");

    // switch statement 
    int menu = 2; // need an integer or char data type
    switch (menu) { 
        // based on the value of the menu, a case is chosen as the starting point
            // of the switch statement
        // the break statement at the end of every case ends the switch statement
            // so only that case is run
        case 0:
            printf("Case 0\n");
            break;
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        // list cases after each other with no break statements 
            // if they do the same thing
        case 3:
        case 4:
            printf("Case 3 and 4\n");
            break;
        default:
            printf("Case default\n");
            break;
    }

    // conditonal operator (ternary) - expression ? iftrue : iffalse
    double balance = -5000;
    // if the expression before ? is true, the statement between ? and :
        // is run and if the expression is false, the statement between : and ;
        // is run
    balance > 0 ? printf("You have money\n") : printf("You have no money\n");
    // can also perform assignment using this expression
    bool hasMoney = balance > 0 ? 1 : 0;

    return 0;
}