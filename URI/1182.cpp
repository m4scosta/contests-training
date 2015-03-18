#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    float m[12][12], soma = 0;
    int l, i, j;
    char t;
    
    cin >> l >> t;
    
    for(i=0; i<12; i++){
             for(j=0; j<12;j++){
                      cin >> m[i][j];
             }
    }
    for(j=0; j<12; j++)
             soma += m[j][l];
    
    if(t == 'S')
         printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma/12);
    return 0;
}
