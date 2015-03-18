#include <iostream>
#include <stdlib.h>

using namespace std;

void soma(int x, int y){
     int i,soma = 0;
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

main(){
       int n, x, y;
       cin >> n;
       for(n; n>0; n--){
              cin >> x >> y;
              soma(x, y);
       }
}
