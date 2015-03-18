#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int i;
    double n[100], v;
    cin >> n[0];
    for(i = 1; i<100; i++){
          n[i] = n[i-1]/2;
    }
    
    for(i = 0; i<100;i++)
          printf("N[%d] = %.4lf\n", i, n[i]);
}
