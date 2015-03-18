#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


int main(int argc, char *argv[])
{
    int i, k, j, menor, pos;
    vector<int> n;
    vector<int>::iterator it;
    
    cin >> k;
    
    for(i = 0; i < k; i++){
          cin >> j;
          n.push_back(j);
    }
    menor = *(n.begin());
    pos = 0;
    for(it = n.begin(), i = 0; it != n.end(); it++, i++)
           if(*it < menor){
                  menor = *it;
                  pos = i;
           }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
    cin >> i;
}
