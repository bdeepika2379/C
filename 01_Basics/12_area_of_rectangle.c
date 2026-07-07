#include <stdio.h>

int main()
{
    float length, breadth, area;

    printf("Enter the length of rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("Area of rectangle = %.2f", area);

    return 0;
}
