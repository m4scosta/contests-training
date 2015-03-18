#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    char dig[4];
    int n, a, b;
    cin >> n;
    for(n; n>0; n--){
           cin >> dig;
           a = dig[0] - '0';
           b = dig[2] - '0';
           if(a == b)
                cout << a*b;
           else if(isupper(dig[1]))
                cout << b-a;
           else 
                cout << a + b;
           cout << endl;
    }
}
