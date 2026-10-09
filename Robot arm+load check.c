#include <stdio.h>

void main()
{
    char robot[20];
    float load1, load2, total;

    printf("Enter robot name: ");
    scanf("%s", robot);

    printf("Enter first load: ");
    scanf("%f", &load1);

    printf("Enter second load: ");
    scanf("%f", &load2);

    total = load1 + load2;

    printf("\nRobot: %s", robot);
    printf("\nTotal load = %.2f kg", total);

    if(total <= 10)
        printf("\nLoad accepted");
    else
        printf("\nOverload");
}=