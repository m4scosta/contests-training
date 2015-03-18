#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int maior, a, b , c;
    scanf("%d %d %d", &a, &b, &c);
    
    maior = (a + b + abs(a-b))/2;
    printf("%d eh o maior\n", (maior + c + abs(maior - c))/2);
}
