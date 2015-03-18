#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char cid[8][15] = {"Brasilia", "Salvador", "São Paulo", "Rio de Janeiro", 
                    "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    int ddd[8] = {61, 71, 11, 21, 32, 19, 27, 31};
    
    int ent, i;
    scanf("%d", &ent);
    for(i = 0; i < 8; i++)
          if(ent == ddd[i]){
                 printf("%s\n", cid[i]);
                 return 0;
          }
    printf("DDD nao encontrado\n");
    return 0;
}
