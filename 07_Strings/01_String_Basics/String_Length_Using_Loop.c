#include <stdio.h>

int main()
{
    char name[50];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", name);

    while(name[length] != '\0')
    {
        length++;
    }

    printf("Length of the string: %d", length);

    return 0;
}
