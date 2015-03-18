#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char month[12][15] = {"January", "February", "March", "April","May", "June", "July",
     "August", "September", "October", "November", "December"};
    int i;
    scanf("%d", &i);
    printf("%s\n", month[i-1]);
}
