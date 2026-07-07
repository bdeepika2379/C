#include <stdio.h>

int main()
{
    float temperature;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    if(temperature > 30)
    {
        printf("The weather is hot");
    }
    else
    {
        printf("The weather is normal");
    }

    return 0;
}

/*
If-Else Statement:

Condition:
Temperature > 30  → Hot weather
Temperature <= 30 → Normal weather
*/
