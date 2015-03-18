#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int num_digits(const int& n) {
    if (n < 10)
        return 1;
    return 1 + num_digits(n / 10);
}


int main()
{
    int n;
    int digits;

    cin >> n;
    while (n != 0) {
        digits = num_digits((int) pow(2, n+n-2));

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                if (j > 0)
                    cout << " ";
                cout << setw(digits) << (int) pow(2, i+j);
            }
            cout << endl;
        }
        cin >> n;
        cout << endl;
    }

    return 0;
}
