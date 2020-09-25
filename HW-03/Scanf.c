#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER 20
int main()
{


char* str = malloc(BUFFER);
char* p = str;
long val;
int array[4] = { 0 };
int i = 0, sum = 0;

scanf("%s", str);
while (*p) {
    if (isdigit(*p)) {
        val = strtol(p, &p, 10);
        array[i] = val;
        printf("%d ", array[i]);
        i++;
    }
    else {
        p++;
        }
}

for (int i = 0; i < 4; i++)
{
    sum += array[i];
}
printf("%d", sum);

return 0;
}
