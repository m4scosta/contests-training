#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int a[20], i, temp;
    for(i = 0; i < 20; i++){
          cin >> a[i];
    }
    
    for(i = 0; i < 10; i++){
          temp = a[i];
          a[i] = a[19-i];
          a[19-i] = temp;
    }
    
    for(i = 0; i<20; i++)
          printf("N[%d] = %d\n", i, a[i]);
    return 0;
}
