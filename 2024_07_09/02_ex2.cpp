#include <iostream>
using namespace std;
int main() {
  int n;
  int k = 0;

  cin >> n;

  for(int i = 1; i <= n; i++) {
    for(int j = n - i; j > 0; j--) {
      cout << " ";
    }
    for(int j = 1; j <= i + (i - 1); j++) {
      if (j <= i) {
        cout << (2 * j - 1) << " ";
      } else {
        cout << (2 * (2 * i - j) - 1) << " ";
      }
    }
    cout << "\n";
  }
}