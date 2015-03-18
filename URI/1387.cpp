#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int l, r;
    while(1){
             cin >> l >> r;
             if(!l && !r) break;
             cout << l + r << endl;
    }
}
