#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void){
   int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
   int num, n, total;
   string str;
   cin >> n;
   for(n; n>0; n--){
          total = 0;
          cin >> str;
          for(string::iterator it = str.begin(); it != str.end(); ++it){
                               num = *it - '0';
                               total += leds[num];
          }
          cout << total << " leds" << endl;
   }
   
return(0);
}
