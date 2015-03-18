#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;

main(){
       int i, j, n, m, p, num, k;
       string key;
       float total;
       map<string, float> prods;
       cin >> n;
       for(i = 0; i < n; i++){
             total = 0;
             cin >> m;
             for(j = 0; j < m; j++){
                   cin >> key;
                   cin >> prods[key];
             }
             cin >> p;
             for(k = 0; k < p; k++){
                   cin >> key >> num;
                   total += (prods[key] * num);
             }
             
             printf("R$ %.2f\n",total);
       }
}
