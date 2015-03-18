#include <iostream>
#include <stdlib.h>
#include <string>
#include <stack>

using namespace std;

main(){
       stack<char> pil;
       string str;
       string a, b;
       int i, n, diam;
       cin >> n;
       for(n; n>0; n--){
              diam = 0;
              cin >> str;
              for(i = 0; i < str.size(); i++){
                    a = str[i];
                    b = "<";
                    if(str[i] == '<') 
                              pil.push('<');
                    else if (str[i] == '>' && !pil.empty()){
                         pil.pop();
                         diam++;
                    }
              }
       cout << diam << endl;
       while(!pil.empty()) pil.pop();
       }
}
