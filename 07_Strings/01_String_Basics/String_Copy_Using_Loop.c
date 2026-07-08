#include <stdio.h>

int main()
{
    char source[50], destination[50];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", source);

    while(source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';

    printf("Original string: %s\n", source);
    printf("Copied string: %s", destination);

    return 0;
}
