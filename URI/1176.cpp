#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

long long fib(int n){
     if(n == 0)
          return 0;
     long long i = 0;
     long long j = 1;
     int k;
     for(k = 1; k < n; k++){
             long long t = i + j;
             i = j;
             j = t;
     }
     return j;
}

int main(int argc, char *argv[])
{
    int i, n;
    cin >> i;
    for(i; i>0; i--){
           cin >> n;
           cout << "Fib(" << n << ") = " << fib(n) << endl;
    }
    cin >> i;
}
