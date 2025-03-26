#include <iostream>
using namespace std;

int main() {
  int n, m;
  int a[101] = {0,};
  int z, x, c;

  cin >> n >> m;

  for(int i = 1; i <= m; i++) {
    cin >> z >> x >> c;

    for(int j = z; j <= x; j++) {
      a[j] = c;
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << a[i] << " ";
  }
}