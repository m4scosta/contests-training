#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void imp_mat_quad(int n){
     int m[n][n];
     int i, j, k;
     for(i = 0; i < n; i++){
          k = i+2;
          for(j = 0; j < n; j++){
                if(i == j)
                     k = 1;
                if(i > j)
                     k -= 1;
                if(i < j)
                     k += 1;
                m[i][j] = k;
          }
    }
    for(i = 0; i < n; i++){
          for(j = 0; j < n; j++){
                printf("%3d", m[i][j]);
                if(j < n-1)
                cout << " ";
          }
          cout << endl;
    }
}

int main(int argc, char *argv[])
{
    int i;
    cin >> i;
    while(i){
           imp_mat_quad(i);
           cout << endl;
           cin >> i;
    }      
}
