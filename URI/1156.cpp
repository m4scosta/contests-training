#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int i;
    double s = 1;
    int div = 2;
    for(i = 3; i <= 39; i += 2){
          s += (double) i / div;
          div *= 2;
    }
    printf("%.2lf\n", s);
    return 0;
}
