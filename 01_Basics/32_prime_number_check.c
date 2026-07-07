#include <stdio.h>

int main()
{
    int number, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("The number is Prime");
    }
    else
    {
        printf("The number is not Prime");
    }

    return 0;
}
