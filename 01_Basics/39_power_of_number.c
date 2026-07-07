#include <stdio.h>

int main()
{
    int base, exponent, result = 1, i;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for(i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    printf("%d power %d = %d", base, exponent, result);

    return 0;
}
