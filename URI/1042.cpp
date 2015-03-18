#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[3], r[3], i,j, tmp;
    scanf("%d %d %d", &v[0], &v[1], &v[2]);
    for(i=0;i<3;i++)
        *(r+i) = *(v+i);
    for(i=0;i<3;i++){
            for(j = i;j<3;j++){
                    if(v[i] > v[j]){
                        tmp = v[i];
                        v[i] = v[j];
                        v[j] = tmp;
        }
            }
    }
    for(i=0;i<3;i++)
        printf("%d\n",*(v+i));
printf("\n");
    for(i=0;i<3;i++)
        printf("%d\n",*(r+i));

}
