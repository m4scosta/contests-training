#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i;
    float x, y;
    scanf("%d", &n);
    for(i =0; i<n; i++){
          scanf("%f %f", &x, &y);
          if(y == 0){
               printf("divisao impossivel\n");
               continue;
          }
          printf("%.1f\n", x / y);
    }         
}
