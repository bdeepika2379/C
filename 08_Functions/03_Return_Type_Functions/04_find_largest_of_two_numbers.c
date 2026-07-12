#include <stdio.h>

int largest(int, int);

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = largest(a, b);

    printf("Largest number = %d", result);

    return 0;
}

int largest(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

/*
Return Type Function

A function returns the
largest of two numbers.
*/
