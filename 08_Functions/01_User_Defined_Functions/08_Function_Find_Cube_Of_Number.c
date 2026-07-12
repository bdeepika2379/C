#include <stdio.h>

// Function Declaration
void findCube();

int main()
{
    findCube();

    return 0;
}

// Function Definition
void findCube()
{
    int number, cube;

    printf("Enter a number: ");
    scanf("%d", &number);

    cube = number * number * number;

    printf("Cube = %d", cube);
}
