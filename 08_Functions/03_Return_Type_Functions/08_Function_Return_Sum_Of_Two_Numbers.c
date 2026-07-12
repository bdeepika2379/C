#include <stdio.h>

// Function Declaration
int addNumbers(int a, int b);

int main()
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = addNumbers(num1, num2);

    printf("Sum = %d", sum);

    return 0;
}

// Function Definition
int addNumbers(int a, int b)
{
    return a + b;
}
