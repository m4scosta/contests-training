#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    while(1){
             int i, n, a, cara = 0;
             cin >> n;
             if(!n) break;
             for(i = n; i>0; i--){
                    cin >> a;
                    if(a == 1) cara++;
             }
             cout << "Mary won " << n - cara << 
                  " times and John won " << cara << " times" << endl;
    }
    return 0;
}
