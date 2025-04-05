#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;
  int x = 0, max = 0, p;

  for(int i = 0; i < 2; i++) {
    cin >> a;
    p = 1;
    x = 0;
    for(int j = 0; j < a.length(); j++) {
      x += (a[j] - '0') * p;
      p*=10;
    }

    if(max < x) {
      max = x;
    }
  }

  cout << max;
}