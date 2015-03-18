#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int hi, mi, hf, mf;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    
    if( hf > hi){
        hf -= hi;
    } else {
        hf = 24 - hi + hf;
    }
    
    if(mf > mi){
          mf -= mi;
    } else {
           hf--;
           mf = 60 - (mi-mf);
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
}
