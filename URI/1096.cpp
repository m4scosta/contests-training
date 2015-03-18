#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, j;
    int n[3] = {7, 6, 5};
    
    for(i = 1; i <= 9; i+=2)
          for(j = 0; j<3; j++)
                printf("I=%d J=%d\n", i, n[j]);
}
