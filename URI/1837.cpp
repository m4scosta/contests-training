#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, q = 0, r = 0;

  scanf("%d %d", &a, &b);

  if (a < 0 && b < 0) {
    a = abs(a);
    b = abs(b);
  }

  q = abs(a) / abs(b);
  r = abs(a) - abs(b) * q;

  if (r < 0) {
    q--;
    r = b + r;
  } else if (r > 0) {
    q++;
    r = b - r;
  }

  printf("%d %d\n", q, r);

  return 0;
}
