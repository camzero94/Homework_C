#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)


int main (void)
{
    float fahrenhit, celsius;

    printf("Enter Celsius Degrees");
    scanf("%f", &fahrenhit);

    celsius = (fahrenhit - FREEZING_PT) * SCALE_FACTOR;
    printf("%.1f", celsius);
    return 0;
}
