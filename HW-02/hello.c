#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * hello()
{
    char *p = malloc(20);
    strcpy(p,"Hello C!");
    return p;
}
int main (void)
{
    char * name;
    name = hello();
    printf("%s", name);
    return 0;

}
