#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 90)
    {
        printf("Grade A");
    }
    else if(marks >= 80)
    {
        printf("Grade B");
    }
    else if(marks >= 70)
    {
        printf("Grade C");
    }
    else if(marks >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}

/*
Else-If Ladder

Syntax:

if(condition1)
{
    // statements
}
else if(condition2)
{
    // statements
}
else if(condition3)
{
    // statements
}
else
{
    // statements
}

The program checks each condition
one by one until a true condition is found.
*/
