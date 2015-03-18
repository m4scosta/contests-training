#include <stdio.h>
#include <string.h>
#define max(a,b) (a > b ? a : b)
 
int matrix[100][100] = {0};
 
int knapsack(int index, int size, int weights[],int values[]){
    int take,dontTake;
 
    take = dontTake = 0;
 
    if (matrix[index][size]!=0)
        return matrix[index][size];
 
    if (index==0){
        if (weights[0]<=size){
            matrix[index][size] = values[0];
            return values[0];
        }
        else{
            matrix[index][size] = 0;
            return 0;
        }
    }
 
    if (weights[index]<=size)
        take = values[index] + knapsack(index-1, size-weights[index], weights, values);
 
    dontTake = knapsack(index-1, size, weights, values);
 
    matrix[index][size] = max (take, dontTake);
 
    return matrix[index][size];
 
}
 
int main(){
    int loop;
    int n = 4;
    int tam = 10;
    int weights[100];
    int val[100];
    scanf("%d",&loop);
    while(loop--){
        memset(matrix,0,sizeof(matrix));
        scanf("%d",&n);
        for(int i = 0; i < n; i++){
            scanf("%d %d",&val[i],&weights[i]);
        }
        scanf("%d",&tam);
        int m = knapsack(n-1,tam,weights,val);
        scanf("%d",&n);
 
        if(m >= n)printf("Missao completada com sucesso\n");
        else printf("Falha na missao\n");
    }
 
    return 0;
}