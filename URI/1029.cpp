#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int fib(int n, int* k){
        (*k)++;
        if(n == 0)
             return 0;
        if(n == 1)
             return 1;
        return fib(n-1, k) + fib(n-2, k);
}

int main(int argc, char *argv[])
{
    int k , n, x;
    cin >> n;
    for(n; n>0; n--){
           k = 0;
           cin >> x;
           cout << "fib(" << x <<") = " <<  --k << " calls = " << fib(x, &k) << endl;
    }
    return 0;
}
