#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, n[100], maior, ind;
    for(i=0; i<100; i++)
             scanf("%d", n+i);
    
    maior = n[0];
    for(i=1; i<100; i++){
             if(maior < n[i]){
                      maior = n[i];
                      ind = i+1;}
             }
    printf("%d\n%d\n", maior, ind);
}
