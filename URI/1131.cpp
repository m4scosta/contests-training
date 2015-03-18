#include <stdio.h>
#include <stdlib.h>

void grenal(int* inter, int* gremio, int* grenais, int* empates){
     (*grenais)++;
      int g1, g2;
      scanf("%d %d", &g1, &g2);
      if(g1 > g2){
            (*inter)++;
      } else if(g1 < g2){
             (*gremio)++;
      } else{
             (*empates)++;
      }
}

int main(void)
{
    int inter = 0, gremio = 0, grenais = 0, empates = 0, op = 1;
    while(op != 2){
             if(op == 1)
                   grenal(&inter, &gremio, &grenais, &empates);
             printf("Novo grenal (1-sim 2-nao)\n");
             scanf("%d", &op);
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    if(inter == gremio){
             printf("Nao houve vencedor\n");
    } else if(inter > gremio){
             printf("Inter venceu mais\n");
    } else {
           printf("Gremio venceu mais\n");}
}
