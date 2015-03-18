#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int mdc(int a,int b)
{
    if (b == 0)
        return a;
    return mdc(b, a%b);
}

int eh_tripla(int a, int b, int c) {
    return a*a == b*b + c*c;
}

int main()
{
    int a, b, c;
    vector<int> nums;

    while(cin >> a >> b >> c)
    {
        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);

        sort(nums.begin(), nums.end(), greater<double>());
        a = nums[0];
        b = nums[1];
        c = nums[2];

        if (eh_tripla(a, b, c)) {
            if (mdc(a, mdc(b, c)) == 1) {
                cout << "tripla pitagorica primitiva" << endl;
            } else {
                cout << "tripla pitagorica" << endl;
            }
        } else {
            cout << "tripla" << endl;
        }

        nums.clear();
    }
    return 0;
}
