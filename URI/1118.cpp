#include <stdio.h>
#include <stdlib.h>

void media(){
      float nota, soma = 0;
      int i = 0;
      while(i < 2){
              scanf("%f", &nota);
              if (nota > 10 || nota < 0){
                 printf("nota invalida\n");
                 continue;
              }
              soma += nota;
              i++;
      }
      printf("media = %.2f\n", soma / 2);
}

int main(void)
{
    int op = 1;
    while(op != 2){
             if(op == 1)
                   media();
             printf("novo calculo (1-sim 2-nao)\n");
             scanf("%d", &op);
    }
}
