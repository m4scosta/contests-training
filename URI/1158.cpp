#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int n, i, x, y, soma;
    cin >> n;
    for(n; n>0; n--){
           soma = 0;
           cin >> x >> y;
           if(x % 2 == 0)
                x += 1;
           for(i = 0; i < y; i++){
                 soma += x;
                 x += 2;
           }
           cout << soma << endl;
    }
    return 0;
}
