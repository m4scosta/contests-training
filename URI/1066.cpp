#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i;
    int par=0, impar=0, pos=0, neg=0;
    for(i=0; i<5; i++){
             scanf("%d", &n);
             
             if(n % 2 == 0){
                  par++;
             }else impar++;
             
             if(n > 0){
                  pos++;
             }else if(n < 0)
                   neg++;
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
}
