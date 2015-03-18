#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n, i = 1, j, k;
    scanf("%d %d",&k, &n);
    
    while(i <= n){
            for (j = 0; j < k-1; j++)
                if( i <= n-1)
                      printf("%d ", i++);
                      printf("%d\n",i++);
            
    }
}
