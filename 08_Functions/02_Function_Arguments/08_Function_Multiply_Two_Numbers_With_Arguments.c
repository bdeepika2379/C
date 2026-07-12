#include <stdio.h>

// Function Declaration
void multiplyNumbers(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function Call
    multiplyNumbers(num1, num2);

    return 0;
}

// Function Definition
void multiplyNumbers(int a, int b)
{
    int product;

    product = a * b;

    printf("Product = %d", product);
}
