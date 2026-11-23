#include <stdio.h>
int main()
{
    int units, bill;
    printf("Enter units: ");
    scanf("%d", &units);

    bill = units * 5;

    printf("Electricity Bill = %d", bill);
    return 0;
}