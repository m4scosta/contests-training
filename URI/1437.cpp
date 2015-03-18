#include <iostream>

using namespace std;

int main()
{
    char dirs[] = {'N', 'L', 'S', 'O'};
    int n, p;
    string d;

    while ((cin >> n) && n) {
          cin >> d;
          p = 0;
          for (int i = 0; i < n; i++) {
              if (d[i] == 'D') p++;
              else p--;

              if (p > 3) p = 0;
              else if (p < 0) p = 3;

          }
          cout << dirs[p] << endl;
    }

    return 0;
}