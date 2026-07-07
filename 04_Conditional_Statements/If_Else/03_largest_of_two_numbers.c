#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
    {
        printf("%d is the largest number", a);
    }
    else
    {
        printf("%d is the largest number", b);
    }

    return 0;
}

/*
If-Else Statement:

Condition:
If a > b → a is largest
Otherwise → b is largest
*/
