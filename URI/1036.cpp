#include <stdio.h>
#include <cmath>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double delta = b*b - 4.0 * a * c;

    if (a == 0.0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        delta = sqrt(delta);
        double div = 2.0 * a;
        printf("R1 = %.5lf\n", (-b + delta) / div);
        printf("R2 = %.5lf\n", (-b - delta) / div);
    }

    return 0;
}
