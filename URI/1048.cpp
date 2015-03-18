#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float sal, nsal;
    scanf("%f", &sal);
    
    if (sal <= 400)
       nsal = sal * 1.15;
    if (sal > 400 && sal <= 800)
       nsal = sal * 1.12;
    if (sal > 800 && sal <= 1200)
       nsal = sal * 1.1;
    if (sal >1200 && sal <= 2000)
       nsal = sal * 1.07;
    if (sal > 2000)
       nsal = sal * 1.04;
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",
                 nsal, nsal - sal,(int) ((nsal - sal) * 100 / sal), 37);
}
