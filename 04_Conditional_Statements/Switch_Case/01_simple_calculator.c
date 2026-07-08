#include <stdio.h>

int main()
{
    int num1, num2;
    char choice;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(choice)
    {
        case '+':
            printf("Result = %d", num1 + num2);
            break;

        case '-':
            printf("Result = %d", num1 - num2);
            break;

        case '*':
            printf("Result = %d", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %d", num1 / num2);
            else
                printf("Division by zero is not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

/*
Switch Case

Syntax:

switch(expression)
{
    case value1:
        // statements
        break;

    case value2:
        // statements
        break;

    default:
        // statements
}
*/
