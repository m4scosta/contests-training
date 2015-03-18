#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void){
    int n, enc, i;
    string st1, st2;
    
    cin >> n;
    for(n;n>0;n--){
                   enc = 1;
                   cin >> st1 >> st2;
                   if(st2.size() == st1.size())
                                 enc = (st1 == st2);
                   else 
                        for(i = 1; i <= st2.size(); i++){
                               if(st1[st1.size() - i] != st2[st2.size() - i]){
                                           enc = 0;
                                           break;
                               }
                        }
                   if(enc)
                          cout << "encaixa" << endl;
                   else 
                          cout << "nao encaixa" << endl;
                   
    }
return(0);
}
