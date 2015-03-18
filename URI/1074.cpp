#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, n;
    scanf("%d", &n);
    
    int x[n];
    for(i = 0; i < n; i++)
          scanf("%d", x+i);
          
    for (i=0;i<n;i++){
        if (x[i] == 0){
           printf("NULL\n");
           continue;}
        
        if(x[i] % 2 == 0){
             printf("EVEN ");
        } else printf("ODD ");
        
        if(x[i] > 0){
             printf("POSITIVE\n");
        } else printf("NEGATIVE\n");
    }
}
