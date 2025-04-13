#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  int num, max;

  cin >> a >> b >> c;

  if(a == b && b == c && a == c) {
    num = 10000 + a * 1000;
  } else if(a == b || b == c || a == c) {
    num = 1000 + (a == b ? a : c) * 100;
  } else {
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    num = max * 100;
  }

  cout << num;
}