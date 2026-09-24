#include <stdio.h>

void main()
{
    int num1, num2, mul;

    printf("Reading of number 1: ");
    scanf("%d", &num1);

    printf("Reading of number 2: ");
    scanf("%d", &num2);

    mul = num1 * num2;

    printf(" num1 = %d, num2 = %d, mul = %d", num1, num2, mul);
}