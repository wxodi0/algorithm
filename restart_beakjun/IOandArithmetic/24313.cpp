#include <iostream>
using namespace std;

int main() {
  int a1, a0;
  int c, n;

  cin >> a1 >> a0;
  cin >> c >> n;

  if(a1 * n  + a0 <= c * n && c >= a1) {
    cout << '1';
    return 0;
  }

  cout << '0';
  return 0;
}