#include <stdio.h>

float division (int num1, int num2)
{
    float result;
    result = (float)num1 / (float)num2;

    return result;
}
int main (void)
{
    int x,y;
    scanf("%d %d", &x,&y);
    if(((x || y) >= 1000) || ((x || y) <= -1000) )
        return 0;
    else
        printf("%.1f %.2f",division(x,y),division(x,y));


return 0;
}
