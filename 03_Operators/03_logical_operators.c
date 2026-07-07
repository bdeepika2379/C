#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two values (0 or 1): ");
    scanf("%d %d", &a, &b);

    printf("\na && b = %d", a && b);
    printf("\na || b = %d", a || b);
    printf("\n!a = %d", !a);
    printf("\n!b = %d", !b);

    return 0;
}

/*
Logical Operators:

&&  Logical AND
||  Logical OR
!   Logical NOT

Output:
1 - True
0 - False
*/
