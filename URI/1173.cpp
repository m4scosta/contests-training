#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int x[10], i, n;
    cin >> x[0];
    for(i = 1; i < 10; i++){
          x[i] = x[i-1]*2;
    }
    
    for(i = 0; i<10; i++)
          printf("N[%d] = %d\n", i, x[i]);
    return 0;
}
