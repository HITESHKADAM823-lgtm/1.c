#include <stdio.h>

void main()
{
    int sensor1, sensor2, sum;

    printf("Reading of sensor 1: ");
    scanf("%d", &sensor1);

    printf("Reading of sensor2: ");
    scanf("%d", &sensor2);

    sum = sensor1 + sensor2;

    printf(" sensor1 = %d,sensor2 = %d, sum = %d", sensor1, sensor2, sum);
}