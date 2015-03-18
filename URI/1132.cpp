#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int x, y, soma;
    scanf("%d %d", &x, &y);
    if(x > y){
         soma = x;
         x = y;
         y = soma;
    }
    soma = 0;
    
    for(x; x <= y; x ++)
           if(!(x % 13 == 0))
                soma += x;
                
    printf("%d\n", soma);
}
