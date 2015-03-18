#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i, in = 0;
    long int x;
    scanf("%d", &n);
    for(i=0; i<n; i++){
             scanf("%d", &x);
             if(x >= 10 && x <= 20)
                  in++;
    }
    printf("%d in\n%d out\n", in, n - in);
}
