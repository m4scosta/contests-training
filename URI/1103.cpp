#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int h1, m1, h2, m2, res;
    
    while(1){
             res = 0;
             scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
             if(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) break;
             
             if(h1 == h2 && m1 > m2){
                   res += 24 * 60 + (60 - m1) + m2 - 60;
                   printf("%d\n", res);
                   continue;}
             
             if(h1 == h2 && m1 == m2){
                   res = 60 * 24;
                   printf("%d\n", res);
                   continue;}
             
             
             if(h2 > h1){
                   res += (h2 - h1) * 60;
             } else if (h2 < h1){
                    res += ((24 - h1) + h2) * 60;
             }
             
             if(m2 > m1){
                   res += m2 - m1;
             } else if(m2 < m1){
                    res -= 60;
                    res += (60 - m1) + m2;
             }
             
             
             printf("%d\n", res);
    }
}
