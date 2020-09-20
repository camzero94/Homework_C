#include <stdio.h>
#define PI 3.14f

float area(int r)
{
    float area = (float)r*(float)r * PI;
    return area;
}

float string(int r)
{
    float string = 2 * PI * (float) r;
    return  string;
}

int main (void)
{
int x;
scanf("%d",&x);
if(x < 1 || x >= 100)
    return 0;
else  
    printf("%.2f ", area(x));
    printf("%.2f", string(x));
return 0;
}
