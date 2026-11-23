#include <stdio.h>

int main()
{
    int level;

    printf("Enter Water Level (0-100): ");
    scanf("%d", &level);

    if(level < 0 || level > 100)
        printf("Invalid Level");
    else if(level == 100)
        printf("Tank is FULL");
    else if(level >= 70)
        printf("Tank is Almost Full");
    else if(level >= 30)
        printf("Tank is Half Filled");
    else
        printf("Water Level is LOW");

    return 0;
}