#include <stdio.h>

void main()
{
    int num1, num2, div;

    printf("Reading of number 1: ");
    scanf("%d", &num1);

    printf("Reading of number 2: ");
    scanf("%d", &num2);

    div = num1 / num2;

    printf(" num1 = %d, num2 = %d, div = %d", num1, num2, div);
}