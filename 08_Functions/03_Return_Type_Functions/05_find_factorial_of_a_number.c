#include <stdio.h>

int factorial(int);

int main()
{
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = factorial(number);

    printf("Factorial = %d", result);

    return 0;
}

int factorial(int number)
{
    int i, fact = 1;

    for(i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    return fact;
}

/*
Return Type Function

A function returns the
factorial of a given number.
*/
