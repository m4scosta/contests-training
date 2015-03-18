#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    long T, PA, PB, anos;
    double G1, G2;
    
    cin >> T;
    for(T; T>0; T--){
           cin >> PA >> PB >> G1 >> G2;
           /*if(G2 >= G1){
                 cout << "Time Limit Exceeded" << endl;
                 continue;
           }*/
           anos = 0;
           while(PA <= PB && anos <= 101){
                    PA += ((double)PA*G1)/100;
                    PB += ((double)PB*G2)/100;
                    anos++;
           }
           if(anos > 100)
                   cout << "Mais de 1 seculo.";
           else
                   cout << anos << " anos.";
           cout << endl;
    }
    return 0;
}
