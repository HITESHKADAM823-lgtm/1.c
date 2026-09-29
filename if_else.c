#include <stdio.h>

void main()
{
    float Student_marks, Passing_marks = 35, Outstanding_marks = 75;

    printf("Enter Student marks: ");
    scanf("%f", &Student_marks);

    if (Student_marks < 0)
    {
        printf("Your marks are invalid");
    }
    else if (Student_marks > 100)
    {
        printf("Your marks are invalid");
    }
    else if (Student_marks >= Outstanding_marks)
    {
        printf("Your marks are outstanding");
    }
    else if (Student_marks >= Passing_marks)
    {
        printf("You are passed");
    }
    else
    {
        printf("You are failed");
    }
}