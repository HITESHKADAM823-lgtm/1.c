#include <stdio.h>

int main()
{
    float sensor_distance, min_safe_dist = 10, target_dist = 50;

    printf("Enter sensor distance (cm): ");
    scanf("%f", &sensor_distance);

    if (sensor_distance < 0)
    {
        printf("Sensor Error: Invalid reading");
    }
    else if (sensor_distance > 400)
    {
        printf("Sensor Error: Out of range");
    }
    else if (sensor_distance >= target_dist)
    {
        printf("Path Clear: Full Speed");
    }
    else if (sensor_distance >= min_safe_dist)
    {
        printf("Obstacle Approaching: Slow Down");
    }
    else
    {
        printf("Emergency Stop: Obstacle Detected");
    }

    return 0;
}