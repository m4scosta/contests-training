#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n, i;
    
    while(1){
            scanf("%d", &n);
            if(!n) break;
                      for(i=1;i<n;i++)
                                        printf("%d ", i);
                      printf("%d\n", i);
    }
}
