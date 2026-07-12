#include <stdio.h>

// Function Declaration
void addNumbers();

int main()
{
    addNumbers();

    return 0;
}

// Function Definition
void addNumbers()
{
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum = %d", sum);
}
