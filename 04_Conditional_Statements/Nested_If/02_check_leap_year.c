#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                printf("%d is a leap year", year);
            }
            else
            {
                printf("%d is not a leap year", year);
            }
        }
        else
        {
            printf("%d is a leap year", year);
        }
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}

/*
Nested If Statement

A year is a leap year if:
1. It is divisible by 4.
2. If it is divisible by 100, it must also be divisible by 400.
*/
