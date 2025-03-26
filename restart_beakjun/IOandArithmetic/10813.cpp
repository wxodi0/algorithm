#include <iostream>
using namespace std;

int main() {
  int n, m;
  int x, y, temp = 0;
  int a[100];

  cin >> n >> m;

  for(int i = 1; i <= n; i++) {
    a[i] = i;
  }

  for(int i = 0; i < m; i++) {
    cin >> x >> y;

    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
  }

  for(int i = 1; i <= n; i++) {
    cout << a[i] << ' ';
  }
}
