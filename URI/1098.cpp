#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    float i , j, aux;
    i = j = 0;
    while(i < 2.2){
            for(j = 1; j <= 3; j++){
                  if(i == 0 || i == 1 || (int)i == 2)
                       printf("I=%d J=%d\n", (int)i, (int)i+(int)j);
                  else
                      printf("I=%.1f J=%.1f\n", i, j+i);
            }
            i += 0.2;
    }
    return 0;
}
