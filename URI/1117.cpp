#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota, soma = 0;
    int i=0;
    while(i<2){
             scanf("%f", &nota);
             
             if(nota <= 10 && nota >= 0){
                     i++;
                     soma += nota;
             } else {
                    printf("nota invalida\n");
             }
    }
    printf("media = %.2f\n", soma / 2);
}
