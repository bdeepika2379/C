#include <stdio.h>

int cube(int);

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = cube(number);

    printf("Cube = %d", result);

    return 0;
}

int cube(int number)
{
    return number * number * number;
}

/*
Return Type Function

A function returns the cube
of the given number.
*/
