#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int x = 1, soma, i;
    while (cin >> x) {
          if(!x) break;
          soma = 0;
          if(abs(x) % 2 == 1)
               x++;
          for(i = 0; i < 5; i++){
                soma += x;
                x += 2;
          }
          cout << soma << endl;
    }
    return 0;
}
