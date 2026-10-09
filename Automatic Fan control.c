#include <stdio.h>

void main()
{
    float temperature;

    printf("Enter temperature in degree celsius: ");
    scanf("%f", &temperature);

    if(temperature > 30)
        printf("Fan ON");
    else
        printf("Fan OFF");
}