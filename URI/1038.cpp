#include <stdio.h>
#include <stdlib.h>


int main()
{
    int cod, qtd;
    scanf("%d %d", &cod, &qtd);
    switch(cod)
    {
               case 1: printf("Total: R$ %.2lf\n", (double) qtd * 4);break;
               case 2: printf("Total: R$ %.2lf\n", (double) qtd * 4.5);break;
               case 3: printf("Total: R$ %.2lf\n", (double) qtd * 5);break;
               case 4: printf("Total: R$ %.2lf\n", (double) qtd * 2);break;
               case 5: printf("Total: R$ %.2lf\n", (double) qtd * 1.5);break;
               default: break;
    }

}
