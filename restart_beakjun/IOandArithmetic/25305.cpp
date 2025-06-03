#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a[1001] = {0,};
  int n, m;

  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  cout << a[n - m];
}