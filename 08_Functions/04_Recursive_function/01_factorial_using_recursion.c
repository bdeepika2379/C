#include <stdio.h>

int factorial(int);

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Factorial = %d", factorial(number));

    return 0;
}

int factorial(int number)
{
    if(number == 0 || number == 1)
    {
        return 1;
    }

    return number * factorial(number - 1);
}

/*
Recursion

A recursive function calls itself
until the base condition is reached.
*/
