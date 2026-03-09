#include <iostream>
using namespace std;

int mcf(int a, int b) {
  int c;

  while(b != 0) {
    c = a % b;
    a = b;
    b = c;
  }

  return a;
}

int main() {
  int n, z;
  int a, b, max = 0, min = 0;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> a >> b;

    max = a > b ? a : b;
    min = a < b ? a : b;
    
    z = mcf(max, min);

    cout << a * b / z << '\n';
  }
}