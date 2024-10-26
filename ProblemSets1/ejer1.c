#include <stdio.h>

int main() {

  int n, h;
  scanf("%d", &n);
  scanf("%d", &h);

  int p[n];
  int row=0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &p[i]);
  }

  for (int i = 0; i < n; i++) {
    if (p[i] <= h) {
      row++;
    } else if (p[i] > h) {
      row = row + 2;
    }
  }
  printf("%d", row);
}
