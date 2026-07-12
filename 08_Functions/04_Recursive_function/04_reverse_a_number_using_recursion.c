#include <stdio.h>

int reverse = 0;

void reverseNumber(int);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    reverseNumber(number);

    printf("Reversed Number = %d", reverse);

    return 0;
}

void reverseNumber(int number)
{
    if(number == 0)
    {
        return;
    }

    reverse = reverse * 10 + number % 10;
    reverseNumber(number / 10);
}

/*
Recursion

This program reverses a number
using a recursive function.
*/
