#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int x[10], i, n;
    for(i = 0; i < 10; i++){
          cin >> n;
          if(n <= 0)
               x[i] = 1;
          else 
               x[i] = n;
    }
    
    for(i = 0; i<10; i++)
          printf("X[%d] = %d\n", i, x[i]);
    return 0;
}
