#include <iostream>
using namespace std;

long long int mcf(long long int a, long long int b) {
  long long int c;

  while(b != 0) {
    c = a % b;
    a = b;
    b = c;
  }

  return a;
}

int main() {
  long long int a, b, z;
  long long int max = 0, min = 0;

  cin >> a >> b;

  max = a > b ? a : b;
  min = a < b ? a : b;
  
  z = mcf(max, min);

  cout << a * b / z << '\n';
}