#include <stdio.h>

int power(int, int);

int main()
{
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("Result = %d", power(base, exponent));

    return 0;
}

int power(int base, int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

/*
Recursion

This program calculates the
power of a number using
a recursive function.
*/
