#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int x1, y1, x2, y2;
    double dist;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf("%.4lf\n", sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)));

}