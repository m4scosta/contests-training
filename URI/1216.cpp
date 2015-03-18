#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    string nome;
    int c, total = 0, n = 0;
    while(getline(cin, nome)){
              cin >> c;
              total += c;
              n++;
              getchar();
    }
    printf("%.1lf\n",(float) total / n);
    return 0;
}
