#include <stdlib.h>
#include <stdio.h>

int main(){
    int n[1000];
    int t, i, j;
    scanf("%d", &t);
    for(i = 0; i<1000; i++){
        for(j = 0; j < t && i < 1000; j++)
            n[i++] = j;
            i--;
    }
    for(i = 0; i<1000; i++)
        printf("N[%d] = %d\n", i, n[i]);

}