#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef pair<int, int> Intervalo;

bool comp(Intervalo c1, Intervalo c2)
{
    return c1.second < c2.second;
}

int main()
{
    int n, x, y;
    vector<Intervalo> intervalos;

    while(cin >> n)
    {
        for (int i = 0; i < n; ++i) {
            cin >> x >> y;
            intervalos.push_back(Intervalo(x, y));
        }

        sort(intervalos.begin(), intervalos.end(), comp);

        Intervalo anterior = intervalos[0];

        int k = 1;
        for (int i = 1; i < n; ++i) {
            if (intervalos[i].first > anterior.second) {
                ++k;
                anterior = intervalos[i];
            }
        }

        cout << k << endl;
        intervalos.clear();
    }

    return 0;
}
