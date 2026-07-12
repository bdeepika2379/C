#include <stdio.h>
#include <math.h>

int main()
{
    double base, exponent, result;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("Result = %.2lf", result);

    return 0;
}

/*
Library Function

Header File:
#include <math.h>

pow(base, exponent) is a predefined
library function used to calculate
the power of a number.
*/
