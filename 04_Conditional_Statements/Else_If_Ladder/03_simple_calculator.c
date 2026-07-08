#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(op == '+')
    {
        printf("Result = %d", num1 + num2);
    }
    else if(op == '-')
    {
        printf("Result = %d", num1 - num2);
    }
    else if(op == '*')
    {
        printf("Result = %d", num1 * num2);
    }
    else if(op == '/')
    {
        if(num2 != 0)
        {
            printf("Result = %d", num1 / num2);
        }
        else
        {
            printf("Division by zero is not allowed");
        }
    }
    else
    {
        printf("Invalid operator");
    }

    return 0;
}

/*
Else-If Ladder

This program performs addition,
subtraction, multiplication, and
division based on the operator
entered by the user.
*/
