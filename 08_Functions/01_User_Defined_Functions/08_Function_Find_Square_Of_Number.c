#include <stdio.h>

// Function Declaration
void findSquare();

int main()
{
    findSquare();

    return 0;
}

// Function Definition
void findSquare()
{
    int number, square;

    printf("Enter a number: ");
    scanf("%d", &number);

    square = number * number;

    printf("Square = %d", square);
}
