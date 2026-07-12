#include <stdio.h>

int sum(int);

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Sum = %d", sum(number));

    return 0;
}

int sum(int number)
{
    if(number == 1)
    {
        return 1;
    }
    else
    {
        return number + sum(number - 1);
    }
}

/*
Recursion

This program finds the sum of
the first n natural numbers
using recursion.
*/
