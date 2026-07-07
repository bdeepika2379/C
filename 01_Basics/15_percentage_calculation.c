#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, total, percentage;

    printf("Enter marks of subject 1: ");
    scanf("%f", &marks1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &marks2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &marks3);

    total = marks1 + marks2 + marks3;

    percentage = (total / 300) * 100;

    printf("Total marks = %.2f\n", total);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}
