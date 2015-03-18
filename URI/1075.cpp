#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, n;
    scanf("%d", &n);
    
    for (i = 0; i<10000; i++)
        if(i % n == 2)
             printf("%d\n", i);
}
