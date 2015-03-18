#include <iostream>
#include <stdio.h>
  
using namespace std;
 
int main(int argc, char *argv[])
{
    int n;
    long x, i, soma;
    cin >> n;
    while(n--){
           cin >> x;
           soma = 0;
           for(i = 1; i <= x; i++)
                 if(x % i == 0)
                      soma += 1;
           if(soma <= 2)
                   cout << x << " eh primo" << endl;
           else
                   cout << x << " nao eh primo" << endl;
    }
    return 0;
}