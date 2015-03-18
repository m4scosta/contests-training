#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double string_to_double( const string& s )
{
    istringstream i(s);
    double x;
    if (!(i >> x))
        return 0;
    return x;
}

int main()
{
    double a;
    for (int i = 0; i < 100; ++i) {
        cin >> a;
        if (a <= 10)
            cout << "A[" << i << "] = " << a << endl;
    }

    return 0;
}
