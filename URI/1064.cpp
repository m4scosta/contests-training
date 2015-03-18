#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float val, soma=0;
    int n=0, i;
    for (i = 0; i < 6; i++){
        scanf("%f", &val);
        if(val > 0){
               n++;
               soma += val;}
    }
    printf("%d valores positivos\n", n);
    printf("%.1f\n", soma / n);
}
