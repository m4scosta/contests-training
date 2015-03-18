#include <cstdlib>
#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char *argv[])
{
    int i;
    double s = 1;
    for(i = 2; i <= 100; i++)
          s += (float) 1 / i;
    printf("%.2lf\n", s);
    return 0;
}
