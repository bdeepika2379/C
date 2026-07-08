#include <stdio.h>

int main()
{
    int units;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if(units <= 100)
    {
        printf("Electricity Bill = Rs.%d", units * 2);
    }
    else if(units <= 200)
    {
        printf("Electricity Bill = Rs.%d", units * 3);
    }
    else if(units <= 300)
    {
        printf("Electricity Bill = Rs.%d", units * 5);
    }
    else
    {
        printf("Electricity Bill = Rs.%d", units * 7);
    }

    return 0;
}

/*
Else-If Ladder

Bill Calculation:
0 - 100 units   -> Rs.2 per unit
101 - 200 units -> Rs.3 per unit
201 - 300 units -> Rs.5 per unit
Above 300 units -> Rs.7 per unit
*/
