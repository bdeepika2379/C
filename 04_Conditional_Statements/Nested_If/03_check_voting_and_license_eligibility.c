#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        if(age >= 21)
        {
            printf("Eligible to vote and apply for a driving license");
        }
        else
        {
            printf("Eligible to vote only");
        }
    }
    else
    {
        printf("Not eligible to vote");
    }

    return 0;
}

/*
Nested If Statement

Outer if:
Checks whether the person can vote.

Inner if:
Checks whether the person is also eligible
to apply for a driving license.
*/
