#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n = 1, i, j, mark, ind;
    int vet[5];
    char alt[5] = {'A', 'B', 'C', 'D', 'E'};
    
    do{
             scanf("%d", &n);
             
             for(i = 0; i < n; i++){
                   mark = 0;
                   scanf("%d %d %d %d %d", vet, vet+1, vet+2, vet+3, vet+4);
                   for(j = 0; j < 5; j++){
                         if(vet[j] <= 127){
                                   mark++;
                                   ind = j;
                         }
                   }
             if(mark == 1){
                     printf("%c\n", alt[ind]);
             } else { 
                    printf("*\n");
             }
             }
    }while(n);
}
