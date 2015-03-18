#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, par=0, i;
    for(i=0; i<5; i++){
             scanf("%d", &n);
             if(n % 2 == 0)
                  par++;
    }
    printf("%d valores pares\n", par);
}
