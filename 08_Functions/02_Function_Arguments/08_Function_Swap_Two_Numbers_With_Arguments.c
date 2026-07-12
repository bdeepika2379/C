#include <stdio.h>

// Function Declaration
void swapNumbers(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function Call
    swapNumbers(num1, num2);

    return 0;
}

// Function Definition
void swapNumbers(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d", b);
}
