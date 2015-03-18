#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int fib(int n){
        if(n <= 2)
             return 1;
        return fib(n-1) + fib(n-2);
}

int main(int argc, char *argv[])
{
    int k , n, x;
    cin >> n;
    cout << "0";
    for(k = 1; k < n; k++){
          cout << " " << fib(k);
    }
    cout << endl;
    return 0;
}
