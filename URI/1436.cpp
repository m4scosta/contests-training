#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
    int t, n, x;
    int index;
    vector<double> nums;

    cin >> t;
    for(int test = 1; test <= t; ++test) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            nums.push_back(x);
        }
        sort(nums.begin(), nums.end(), greater<double>());
        cout << "Case " << test << ": " << nums[(int) ceil((int) n / 2)] << endl;

        nums.clear();
    }

    return 0;
}
