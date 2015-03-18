#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,n;
    scanf("%d", &n);
    for (i=2;i<=n;i+=2)
        printf("%d^2 = %d\n", i, i*i);
}
