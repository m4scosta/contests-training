#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double limite = 12.0;
    double d, vf, vg;
    while (cin >> d >> vf >> vg)
    {
        if ((limite / vf) >= (sqrt(d*d + limite*limite) / vg))
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
