#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    int n;
    long x, i, soma;
    cin >> n;
    for(n; n > 0; n--){
           cin >> x;
           soma = 0;
           for(i = 1; i < x; i++)
                 if(x % i == 0)
                      soma += i;
           if(soma == x)
                   cout << x << " eh perfeito" << endl;
           else 
                   cout << x << " nao eh perfeito" << endl;
    }
    return 0;
}
