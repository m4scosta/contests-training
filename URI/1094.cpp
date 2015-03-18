#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i, q;
    int coe=0, rat=0, sap=0, total;
    char c;
    scanf("%d", &n);
    for(i=0;i<n;i++){
                     scanf("%d %c", &q, &c);
                     if(c == 'C'){
                          coe += q;
                     } else if(c == 'R'){
                            rat += q;
                     } else sap += q;
    }
    total = coe + rat + sap;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coe);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", sap);
    printf("Percentual de coelhos: %.2f %c\n",(float) coe*100/total, 37);
    printf("Percentual de ratos: %.2f %c\n", (float) rat*100/total, 37);
    printf("Percentual de sapos: %.2f %c\n", (float) sap*100/total, 37);
}
