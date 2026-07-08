#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 40)
    {
        if(marks >= 75)
        {
            printf("Pass with Distinction");
        }
        else
        {
            printf("Pass");
        }
    }
    else
    {
        printf("Fail");
    }

    return 0;
}

/*
Nested If Statement

Outer if:
Checks whether the student has passed.

Inner if:
Checks whether the student has scored
75 or above to get distinction.
*/
