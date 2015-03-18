#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>


using namespace std;

int main(int argc, char *argv[])
{
    int i, ini, fim;
            cin >> ini >> fim;
            for(i = min(ini, fim)+1; i < max(ini, fim); i++)
                  if(i % 5 == 2 || i % 5 == 3)
                       cout << i << endl;
    return 0;
}
