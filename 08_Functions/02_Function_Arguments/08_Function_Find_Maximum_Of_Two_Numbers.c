#include <stdio.h>

// Function Declaration
void findMaximum(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function Call
    findMaximum(num1, num2);

    return 0;
}

// Function Definition
void findMaximum(int a, int b)
{
    if(a > b)
    {
        printf("%d is the largest number.", a);
    }
    else
    {
        printf("%d is the largest number.", b);
    }
}
