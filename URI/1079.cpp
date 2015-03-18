#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, n;
    scanf("%d", &n);
    float val[n][3];
    
    for(i = 0; i < n; i++)
          scanf("%f %f %f", &val[i][0], &val[i][1], &val[i][2]);
    
    for(i = 0; i < n; i++)
          printf("%.1f\n", ((val[i][0]*2) + (val[i][1] * 3) + (val[i][2] * 5))/10);
    
}
