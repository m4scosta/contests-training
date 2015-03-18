#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int soma = 0, A, N, i;
    cin >> A >> N;
    while(N <= 0)
          cin >> N;
          for(i = 0; i < N; i++)
                soma += A++;
          cout << soma << endl;
    return 0;
}
