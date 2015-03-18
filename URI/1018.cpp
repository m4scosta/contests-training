#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, val_ini, val, n_notas[7];
    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &val);
    val_ini = val;
    for(i = 0; i < 7; i++)
    {
        n_notas[i] = val / notas[i];
        val -= notas[i] * n_notas[i];
    }
    printf("%d\n", val_ini);

    for(i = 0; i < 7; i++)
        printf("%d nota(s) de R$ %d,00\n",n_notas[i],notas[i]);
}
