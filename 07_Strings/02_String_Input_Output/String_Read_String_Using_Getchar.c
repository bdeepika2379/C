#include <stdio.h>

int main()
{
    char str[50];
    int i = 0;

    printf("Enter a string: ");

    while((str[i] = getchar()) != '\n')
    {
        i++;
    }

    str[i] = '\0';

    printf("Entered string: %s", str);

    return 0;
}
