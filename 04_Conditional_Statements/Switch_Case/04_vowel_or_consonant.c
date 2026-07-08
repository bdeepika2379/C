#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The alphabet is a vowel");
            break;

        default:
            printf("The alphabet is a consonant");
    }

    return 0;
}

/*
Switch Case

This program checks whether
the entered alphabet is a
vowel or a consonant.
*/
