#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    printf("Length of the string = %d", length - 1);

    return 0;
}

/*
Library Function

Header File:
#include <string.h>

strlen() is a predefined
library function used to
find the length of a string.
*/
