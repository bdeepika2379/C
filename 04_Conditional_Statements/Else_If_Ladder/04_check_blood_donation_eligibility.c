#include <stdio.h>

int main()
{
    int age, weight;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight (kg): ");
    scanf("%d", &weight);

    if(age < 18)
    {
        printf("Not eligible for blood donation");
    }
    else if(weight < 50)
    {
        printf("Not eligible due to low weight");
    }
    else
    {
        printf("Eligible for blood donation");
    }

    return 0;
}

/*
Else-If Ladder

Conditions:
Age < 18        -> Not eligible
Weight < 50 kg  -> Not eligible
Otherwise       -> Eligible
*/
