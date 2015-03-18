#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int id, k = 0, soma = 0;
    while(1){
             cin >> id;
             if(id < 0) break;
             soma += id;
             k++;
    }
    printf("%.2f\n", (float) soma / k);
    return 0;
}
