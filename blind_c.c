#include <stdio.h>

int main()
{
    float radius, N;
    float circumference_cm;
    float total_dist_travelled_cm;
    float total_dist_travelled_m;

    printf("Enter radius in cm: ");
    scanf("%f", &radius);

    printf("Enter number of rotations N: ");
    scanf("%f", &N);

    // Calculations
    circumference_cm = 2 * 3.14 * radius;
    total_dist_travelled_cm = circumference_cm * N;
    total_dist_travelled_m = total_dist_travelled_cm / 100.0;

    // Output results
    printf("circumference_cm = %.2f\n", circumference_cm);
    printf("Total_dist_travelled_cm = %.2f\n", total_dist_travelled_cm);
    printf("Total_dist_travelled_m = %.2f\n", total_dist_travelled_m);

    return 0;
}