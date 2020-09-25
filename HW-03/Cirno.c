#include <stdio.h>

int main ()
{
    int A,B,C,D,X,Y,Z;

    scanf("%d %d %d %d", &A,&B,&C,&D);
    X = A;
    Y = X - B + C;
    Z = Y - D;

    printf("000%d 000%d 000%d", X,Y,Z);
   
    
    return 0;

}
