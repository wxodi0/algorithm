#include <iostream>
using namespace std;

int main() {
  int n, m;
  int a[5] = {25, 10, 5, 1};

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> m;

    for(int j = 0; j < 4; j++) {
      cout << m/a[j] << " ";
      m%=a[j];
    }

    cout << '\n';
  }
}