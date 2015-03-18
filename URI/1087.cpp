#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x1, x2, y1, y2;
    
    while(1){
             scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
             
             if(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) break;
             
             if(x2 == x1 && y2 == y1){
                   printf("%d\n", 0);
                   continue;}
             if(x2 == x1 || y2 == y1 || abs(x2 - x1) == abs(y2 - y1)){
                   printf("%d\n", 1);
                   continue;}
             printf("%d\n", 2);
    }
}
