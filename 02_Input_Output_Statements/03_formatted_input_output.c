#include <stdio.h>

int main()
{
    int roll_no;
    char grade;
    float marks;

    printf("Enter your roll number: ");
    scanf("%d", &roll_no);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Details -----\n");
    printf("Roll Number : %d\n", roll_no);
    printf("Marks       : %.2f\n", marks);
    printf("Grade       : %c\n", grade);

    return 0;
}

/*
Format Specifiers:
%d  - Integer
%f  - Float
%c  - Character
%s  - String

Escape Sequences:
\n  - New line
\t  - Tab space
*/
