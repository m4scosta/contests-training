#include <stdlib.h>
#include <stdio.h>

int main()
{
    int d, a, m;
    scanf("%d", &d);
    a = d/365; d -= 365*a;
    m = d/30; d -= 30*m;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
}
