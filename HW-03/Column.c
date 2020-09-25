#include <stdio.h>

int main (void)
{
    int A,B;
    int sum =0;
    scanf("%d %d", &A,&B);

    sum = A + B;
    printf("  %.4d\n+)%.4d\n------\n%.6d",A,B,sum);

    return 0;
}