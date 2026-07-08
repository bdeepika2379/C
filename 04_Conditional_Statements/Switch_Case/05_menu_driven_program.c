#include <stdio.h>

int main()
{
    int choice;
    int a, b;

    printf("===== MENU =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case 1:
            printf("Result = %d", a + b);
            break;

        case 2:
            printf("Result = %d", a - b);
            break;

        case 3:
            printf("Result = %d", a * b);
            break;

        case 4:
            if(b != 0)
            {
                printf("Result = %d", a / b);
            }
            else
            {
                printf("Division by zero is not allowed");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

/*
Switch Case

A menu-driven program allows the user
to select an option from a menu.

1 - Addition
2 - Subtraction
3 - Multiplication
4 - Division
*/
