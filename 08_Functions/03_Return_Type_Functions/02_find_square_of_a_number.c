#include <stdio.h>

int square(int);

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = square(number);

    printf("Square = %d", result);

    return 0;
}

int square(int number)
{
    return number * number;
}

/*
Return Type Function

A function returns the square
of the given number.
*/
