#include <stdio.h>

int main()
{
    int cp1, cp2, n1, n2;
    double v1, v2;
    scanf("%d %d %lf %d %d %lf", &cp1, &n1, &v1, &cp2, &n2, &v2);
    printf("VALOR A PAGAR: R$ %.2lf\n", n1*v1 + n2*v2);
}
