#include <stdio.h>

int main ()
{
    int A,B,C,D,X,Y,Z;

    scanf("%d %d %d %d", &A,&B,&C,&D);
    X = A;
    Y = X - B + C;
    Z = Y - D;

    printf("%.4d %.4d %.4d", X,Y,Z);
   
    
    return 0;

}
