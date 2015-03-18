#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if( b > a){
        printf("O JOGO DUROU %d HORA(S)\n", b - a );
    } else {
        printf("O JOGO DUROU %d HORA(S)\n", 24 - a + b );
    }
}
