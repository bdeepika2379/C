#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\na & b  = %d", a & b);
    printf("\na | b  = %d", a | b);
    printf("\na ^ b  = %d", a ^ b);
    printf("\n~a     = %d", ~a);
    printf("\na << 1 = %d", a << 1);
    printf("\na >> 1 = %d", a >> 1);

    return 0;
}

/*
Bitwise Operators:

&   Bitwise AND
|   Bitwise OR
^   Bitwise XOR
~   Bitwise NOT
<<  Left Shift
>>  Right Shift
*/
