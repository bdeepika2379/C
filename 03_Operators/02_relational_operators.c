#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\na > b  : %d", a > b);
    printf("\na < b  : %d", a < b);
    printf("\na >= b : %d", a >= b);
    printf("\na <= b : %d", a <= b);
    printf("\na == b : %d", a == b);
    printf("\na != b : %d", a != b);

    return 0;
}

/*
Relational Operators:

>   Greater than
<   Less than
>=  Greater than or equal to
<=  Less than or equal to
==  Equal to
!=  Not equal to

Output:
1 - True
0 - False
*/
