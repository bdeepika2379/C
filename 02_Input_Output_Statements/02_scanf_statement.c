#include <stdio.h>

int main()
{
    int age;
    float height;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("\nYour age is %d", age);
    printf("\nYour height is %.2f", height);

    return 0;
}


// Syntax of scanf()
// scanf("format_specifier", &variable_name);
