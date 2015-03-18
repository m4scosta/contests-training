#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    double gas;
    scanf("%d %d", &x, &y);
    gas = (double) x/y;
    printf("%.3lf km/l\n", gas);
}
