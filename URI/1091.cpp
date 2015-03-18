#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int k, n, m, x, y, i;
    while(1){
             cin >> k;
             if(!k) break;
             cin >> n >> m;
             for(i = 0; i<k; i++){
                   cin >> x >> y;
                   if(x == n || y == m){
                        printf("divisa\n");
                   } else if (x > n){
                        if(y > m)
                             printf("NE\n");
                        if(y < m)
                             printf("SE\n");
                   } else if (x < n){
                        if( y > m )
                            printf("NO\n");
                        if( y < m )
                            printf("SO\n");
                   } 
             }
    }
    return 0;
}
