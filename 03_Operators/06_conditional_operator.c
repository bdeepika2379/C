#include <stdio.h>

int main()
{
    int a, b, largest;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    largest = (a > b) ? a : b;

    printf("Largest number is: %d", largest);

    return 0;
}

/*
Conditional Operator:

Syntax:

condition ? expression1 : expression2;

If the condition is true,
expression1 will execute.

If the condition is false,
expression2 will execute.

Example:
(a > b) ? a : b;
*/
