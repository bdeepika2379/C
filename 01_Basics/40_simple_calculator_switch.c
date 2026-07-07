#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("Addition = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Subtraction = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Multiplication = %.2f", result);
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Division = %.2f", result);
            }
            else
            {
                printf("Cannot divide by zero");
            }
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
