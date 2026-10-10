#include <stdio.h>

void main()
{
    float distance, time, speed;

    printf("Enter distance in meters: ");
    scanf("%f", &distance);

    printf("Enter time in seconds: ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Speed = %.2f m/s", speed);

    if(speed > 10)
        printf("\nObject is moving fast");
    else
        printf("\nObject is moving slowly");
}