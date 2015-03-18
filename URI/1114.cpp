#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int senha = 0;
    while(1){
             scanf("%d", &senha);
             if(senha == 2002){
                      printf("Acesso Permitido\n");
                      break;
             }
             printf("Senha Invalida\n");
    }
}
