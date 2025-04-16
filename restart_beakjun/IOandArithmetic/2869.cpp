#include <iostream>
#include <cmath>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  double a, b, v, day = 0, i = 0;

  cin >> a >> b >> v;

  cout << ceil(v/(a - b));
}