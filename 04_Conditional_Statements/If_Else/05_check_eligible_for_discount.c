#include <stdio.h>

int main()
{
    float amount;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if(amount >= 1000)
    {
        printf("You are eligible for discount");
    }
    else
    {
        printf("You are not eligible for discount");
    }

    return 0;
}

/*
If-Else Statement:

Condition:
Amount >= 1000 → Eligible for discount
Amount < 1000  → Not eligible for discount
*/
