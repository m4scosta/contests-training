#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int h = 12;
    double m[h][h], soma = 0;
    int i, j, k=0;
    char t;
    
    cin >> t;
    
    for(i=0; i<h; i++){
             for(j=0; j<h;j++){
                      cin >> m[i][j];
             }
    }
    
    for(i=0; i < h; i++){
             for(j=0 ; j < h; j++){
                      if(j+i<h-1 && j>i){
                             soma += m[i][j];
                      }
             }
    }
    
    if(t == 'S')
         printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma/66);
    cin >> i;
    return 0;
}
