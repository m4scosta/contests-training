#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[])
{
    int i, x, z, soma = 0;
    cin >> x >> z;
    while(!(z > x))
            cin >> z;
    soma = x;
    i = 1;
    while(soma < z){
               soma += ++x;
               i++;
    }
          
    cout << i << endl;
    return 0;
}
