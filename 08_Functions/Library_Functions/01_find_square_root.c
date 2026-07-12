#include <stdio.h>
#include <math.h>

int main()
{
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    result = sqrt(number);

    printf("Square Root = %.2lf", result);

    return 0;
}

/*
Library Function

Header File:
#include <math.h>

sqrt() is a predefined library
function used to find the square
root of a number.
*/
