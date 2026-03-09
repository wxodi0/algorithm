#include <iostream>
#include <cmath>
using namespace std;

int crd(int a, int b) {
  int c = 0;
  
  while(b != 0) {
    c = a % b;
    a = b;
    b = c;
  }

  return a;
}

int main() {
  int a, b;
  int n, m;
  int z = 0, w = 0;
  int resultZ = 0;

  cin >> a >> n;
  cin >> b >> m;

  z = crd(n, m);
  w = n * m / z;

  a *= (w / n);
  b *= (w / m);

  resultZ = crd(a + b, w);

  cout << (a + b) / resultZ << ' ' << w / resultZ;

}