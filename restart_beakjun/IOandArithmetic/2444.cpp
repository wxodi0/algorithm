#include <iostream>
using namespace std;

void starCommon(int n, int i) {
  for(int j = 1; j <= n - i; j++) {
    cout << " ";
  }
  for(int j = 1; j <= i + (i - 1); j++) {
    cout << "*";
  }

  cout << '\n';
}

int main() {
  int n;

  cin >> n;

  for(int i = 1; i <= n; i++) {
    starCommon(n, i);
  }

  for(int i = n - 1; i > 0; i--) {
    starCommon(n, i);
  }
}