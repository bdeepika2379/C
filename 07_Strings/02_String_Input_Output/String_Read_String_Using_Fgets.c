#include <stdio.h>

int main()
{
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Entered sentence: %s", sentence);

    return 0;
}
