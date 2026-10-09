#include <stdio.h>

void main()
{
    char vehicle[20];
    float speed, time, distance;

    printf("Enter vehicle name: ");
    scanf("%s", vehicle);

    printf("Enter speed in km/h: ");
    scanf("%f", &speed);

    printf("Enter time in hours: ");
    scanf("%f", &time);

    distance = speed * time;

    printf("\nVehicle: %s", vehicle);
    printf("\nDistance = %.2f km", distance);

    if(speed > 60)
        printf("\nSpeed HIGH - Reduce speed");
    else
        printf("\nSpeed SAFE");
}