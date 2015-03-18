#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
       int i, x, y, soma = 0;
       cin >> x >> y;
       if(x > y){
            i = y;
            y = x;
            x = i;
       }
       
       for(i = x+1; i<y; i++)
              if(abs(i) % 2 == 1){
                     soma += i;
              }
       cout << soma << endl;    
}
