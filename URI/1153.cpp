#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[])
{
    long fat = 1;
    int n;
    cin >> n;
    for(n; n>0;n--)
           fat *= n;
    cout << fat << endl;
    return 0;
}
