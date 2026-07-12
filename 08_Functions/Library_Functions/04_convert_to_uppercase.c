#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a lowercase alphabet: ");
    scanf("%c", &ch);

    ch = toupper(ch);

    printf("Uppercase alphabet = %c", ch);

    return 0;
}

/*
Library Function

Header File:
#include <ctype.h>

toupper() is a predefined
library function used to
convert a lowercase letter
to an uppercase letter.
*/
