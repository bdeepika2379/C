#include <stdio.h>

int main()
{
    int number, factorial = 1, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d", number, factorial);

    return 0;
}
