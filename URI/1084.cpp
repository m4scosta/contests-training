#include <iostream>
#include <stack>
#include <deque>

using namespace std;

int main()
{
    int n, d;
    string num;
    deque<char> res;

    while((cin >> n >> d) && n && d)
    {
        cin >> num;
        int d_ = d;

        for (int i = 0; i < n; ++i)
        {
            while(!res.empty() && d && res.back() < num[i]) {
                res.pop_back();
                --d;
            }
            res.push_back(num[i]);
        }

        if (!d) {
            while(!res.empty()) {
                cout << res.front();
                res.pop_front();
            }
        } else {
            int i = -1;
            while(++i < n - d_) {
                cout << res.front();
                res.pop_front();
            }
            res.clear();
        }
        cout << endl;
    }

    return 0;
}
