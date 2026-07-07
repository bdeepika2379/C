#include <stdio.h>

int main()
{
    int number, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while(number != 0)
    {
        remainder = number % 10;
        sum = sum + (remainder * remainder * remainder);
        number = number / 10;
    }

    if(original == sum)
    {
        printf("The number is an Armstrong number");
    }
    else
    {
        printf("The number is not an Armstrong number");
    }

    return 0;
}
