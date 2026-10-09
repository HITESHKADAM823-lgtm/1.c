#include <stdio.h>

void main()
{
    int load;

    printf("Enter load in kg: ");
    scanf("%d", &load);

    if(load <= 10)
        printf("Load accepted - Arm can lift");
    else
        printf("Overload - Do not lift");
}