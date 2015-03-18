#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x, y;
    while(1){
             scanf("%d %d", &x, &y);
             if (x == y) break;
             
             if(x > y){
                  printf("Decrescente\n");
                  continue;}
             printf("Crescente\n");
    }
}
