#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>


using namespace std;

int main(int argc, char *argv[])
{
    int i, ini, fim,soma;
    while(1){
             soma = 0;
            cin >> ini >> fim;
            if(min(ini, fim) <= 0) break;
            
            for(i = min(ini, fim); i <= max(ini, fim); i++){
                  cout << i << " ";
                  soma += i;
                  }
            cout << "Sum=" << soma << endl;
}
    return 0;
}
