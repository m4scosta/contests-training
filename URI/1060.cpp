#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, res=0;
    float val;
    for ( i=0; i < 6; i++){
        scanf("%f", &val);
        if (val > 0)
           res++;
    }
    printf("%d valores positivos\n", res);
}
