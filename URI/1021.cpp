#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, n_valores[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    double val;
    double valores[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.1, 0.05, 0.01};

    scanf("%lf", &val);

    for(i = 0; i < 12; i++)
    {
        while (val > *(valores+i))
        {
            *(n_valores+i) += 1;
            val -= *(valores+i);
        }
    }

    printf("NOTAS:\n");

    for(i = 0; i < 12; i++){
        if(i<6)
            printf("%d nota(s) de R$ %.2lf\n",n_valores[i],valores[i]);
        else{
            if(i == 6)
                printf("MOEDAS:\n");
            printf("%d moeda(s) de R$ %.2lf\n",n_valores[i],valores[i]);
        }
    }
}
