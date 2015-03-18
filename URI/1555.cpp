#include <iostream>

using namespace std;

int r(const int& x, const int& y)
{
    return (3 * x) * (3 * x) + y * y;
}

int b(const int& x, const int& y)
{
    return 2 * (x * x) + (5 * y) * (5 * y);
}

int c(const int& x, const int& y)
{
    return -100 * x + y * y * y;
}

int main()
{
    int n, x, y;
    int rr, rb, rc;

    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        rr = r(x, y);
        rb = b(x, y);
        rc = c(x, y);

        if (rr > rb && rr > rc) {
            cout << "Rafael ganhou" << endl;
        } else if (rb > rr && rb > rc) {
            cout << "Beto ganhou" << endl;
        } else {
            cout << "Carlos ganhou" << endl;
        }

    }

    return 0;
}
