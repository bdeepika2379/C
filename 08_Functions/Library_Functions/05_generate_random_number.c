#include <stdio.h>
#include <stdlib.h>

int main()
{
    int randomNumber;

    randomNumber = rand();

    printf("Random Number = %d", randomNumber);

    return 0;
}

/*
Library Function

Header File:
#include <stdlib.h>

rand() is a predefined
library function used to
generate a random number.
*/
