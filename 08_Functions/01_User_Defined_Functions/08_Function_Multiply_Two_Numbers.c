#include <stdio.h>

// Function Declaration
void multiplyNumbers();

int main()
{
    multiplyNumbers();

    return 0;
}

// Function Definition
void multiplyNumbers()
{
    int a, b, product;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    product = a * b;

    printf("Product = %d", product);
}
