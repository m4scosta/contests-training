#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


int main(int argc, char *argv[])
{
    int i, n, j;
    vector<int> par;
    vector<int> impar;
    vector<int>::iterator it;
    for(i = 0; i < 15; i++){
           cin >> n;
           if(abs(n) % 2 == 0)
                     par.push_back(n);
           else
                     impar.push_back(n);
           
           if(par.size() == 5){
                           j = 0;
                           for(it = par.begin(); it != par.end(); it++)
                                  cout << "par[" << j++ << "] = " << *it << endl;
                           par.clear();
           }
           
           if(impar.size() == 5){
                             j = 0;
                             for(it = impar.begin(); it != impar.end(); it++)
                                    cout << "impar[" << j++ << "] = " << *it << endl;
                             impar.clear();
           }
    }
    j = 0;
    for(it = impar.begin(); it != impar.end(); it++)
           cout << "impar[" << j++ << "] = " << *it << endl;
    
    j = 0;
    for(it = par.begin(); it != par.end(); it++)
           cout << "par[" << j++ << "] = " << *it << endl;
    
    cin >> i;
}
