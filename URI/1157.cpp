#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int n, i;
    cin >> n;
    for(i = 1; i <= n; i++)
          if(n%i == 0)
                 cout << i << endl;
    return 0;
}
