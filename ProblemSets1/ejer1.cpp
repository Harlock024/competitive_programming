#include <iostream>
using namespace std;

int main() {
  int n, h, row = 0;
  cin >> n >> h;
  int p[n];
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  for (int i = 0; i < n; i++) {
    if (p[i] <= h)
      row++;
    else if (p[i] > h)
      row += 2;
  }

  cout << row << endl;
  return 0;
}
