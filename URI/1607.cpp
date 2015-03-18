#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    int matriz[128][128];

    for (int i = 'a'; i <= 'z'; ++i) {
        for (int j = 'a'; j <= 'z'; ++j) {
            matriz[i][j] = -1;
        }
    }

    cin >> t;
    string a, b;
    int i, j;
    while(t--) {
        cin >> a >> b;
        int len = a.length();
        int soma = 0;
        for (int k = 0; k < len; ++k) {
            i = a[k];
            j = b[k];

            if (matriz[i][j] == -1) {
                if (j >= i) {
                    matriz[i][j] = j - i;
                } else {
                    matriz[i][j] = ('z' - i) + (j - 'a') + 1;
                }
            }

            soma += matriz[i][j];
        }

        cout << soma << endl;
    }

    return 0;
}
