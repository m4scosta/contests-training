#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a > abs(b - c) && a < b+c)
       printf("Perimetro = %.1lf\n",a+b+c);
    else
        printf("Area = %.1lf\n", c*(a+b)/2);	
}
