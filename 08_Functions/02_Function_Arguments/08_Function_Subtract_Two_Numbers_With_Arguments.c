#include <stdio.h>

// Function Declaration
void subtractNumbers(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function Call
    subtractNumbers(num1, num2);

    return 0;
}

// Function Definition
void subtractNumbers(int a, int b)
{
    int difference;

    difference = a - b;

    printf("Difference = %d", difference);
}
