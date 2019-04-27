#include <stdio.h>

using namespace std;

int main() {
  int n, i, j, elem, square_center, square_start, square_end;

  while (scanf("%d", &n) != EOF) {
    square_center = n / 2;
    square_start = n / 3;
    square_end = n - square_start - 1;

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        elem = 0;

        if (i == square_center && j == square_center) {
          elem = 4;
        } else if (i >= square_start && i <= square_end && j >= square_start && j <= square_end) {
          elem = 1;
        } else if (i == j && (i < square_center || j > square_center)) {
          elem = 2;
        } else if (i != j && i + j == n - 1) {
          elem = 3;
        }

        printf("%d", elem);
      }
      printf("\n");
    }

    printf("\n");
  }

  return 0;
}
