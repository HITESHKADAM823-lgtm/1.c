#include <stdio.h>

void main()
{
    int battery;

    printf("Enter battery level: ");
    scanf("%d", &battery);

    if(battery >= 30)
        printf("Robot can operate");
    else
        printf("Low battery - Charge robot");
}