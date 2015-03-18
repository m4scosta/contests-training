#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    double a, b, c, n;
    vector<double> nums = vector<double>();

    for (int i = 0; i < 3; ++i) {
        cin >> n;
        nums.push_back(n);
    }

    sort(nums.begin(), nums.end(), greater<double>());
    a = nums[0];
    b = nums[1];
    c = nums[2];

    if (a >= b+c){
        cout << "NAO FORMA TRIANGULO\n";
    } else {
        if (a*a == b*b + c*c) {
            cout << "TRIANGULO RETANGULO\n";
        }

        if (a*a > b*b + c*c) {
            cout << "TRIANGULO OBTUSANGULO\n";
        }

        if (a*a < b*b + c*c) {
            cout << "TRIANGULO ACUTANGULO\n";
        }

        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO\n";
        }

        if (a == b && b != c || a == c && a != b || c == b && b != a) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }

    return 0;
}
