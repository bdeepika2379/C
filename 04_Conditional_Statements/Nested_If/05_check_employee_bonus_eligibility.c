#include <stdio.h>

int main()
{
    int years_of_service;
    float salary;

    printf("Enter years of service: ");
    scanf("%d", &years_of_service);

    printf("Enter salary: ");
    scanf("%f", &salary);

    if(years_of_service >= 5)
    {
        if(salary >= 30000)
        {
            printf("Eligible for bonus");
        }
        else
        {
            printf("Not eligible for bonus due to salary criteria");
        }
    }
    else
    {
        printf("Not eligible for bonus due to service criteria");
    }

    return 0;
}

/*
Nested If Statement

Outer if:
Checks whether the employee has
at least 5 years of service.

Inner if:
Checks whether the salary is
₹30,000 or above.

Only if both conditions are true,
the employee is eligible for a bonus.
*/
