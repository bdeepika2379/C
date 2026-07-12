#include <stdio.h>

// Function Declaration
void addNumbers(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function Call
    addNumbers(num1, num2);

    return 0;
}

// Function Definition
void addNumbers(int a, int b)
{
    int sum;

    sum = a + b;

    printf("Sum = %d", sum);
}
