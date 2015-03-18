#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x, i;
    scanf("%d", &x);
    if (x % 2 == 0)
       x++;
    for(i=0; i<6; i++){
           printf("%d\n",x);
           x += 2;
    }
}
