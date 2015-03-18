#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, j;
    int n = 7;
    for(i = 1; i <= 9; i+=2){
          for(j = 0; j<3; j++)
                printf("I=%d J=%d\n", i, n--);
          n += 5;}
}
