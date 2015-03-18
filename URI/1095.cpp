#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, j;
    
    for(i=1, j=60; j >= 0; j -= 5, i += 3)
             printf("I=%d J=%d\n", i, j);
}
