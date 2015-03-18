#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int op=5;
    int comb[3] = {0,0,0};
    do{
        scanf("%d", &op);
        switch(op){
                   case 1:
                        comb[0]++;
                        break;
                   case 2:
                        comb[1]++;
                        break;
                   case 3:
                        comb[2]++;
                        break;
                   }
        }while(op != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", comb[0]);
    printf("Gasolina: %d\n", comb[1]);
    printf("Diesel: %d\n",comb[2]);
}
