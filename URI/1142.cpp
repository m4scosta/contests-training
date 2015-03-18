#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n, x=1, i;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
          printf("%d ", x++);
          printf("%d ", x++);
          printf("%d ", x++);
          printf("PUM\n");
          x++;
    }
}
