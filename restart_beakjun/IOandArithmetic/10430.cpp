#include <iostream>
using namespace std;

//모듈러 연산 ( Modular Arithmetic ) 과 증명

int main() {
  int a, b, c;

  cin >> a >> b >> c;

  cout << (a + b) % c << endl;
  cout << ((a % c) + (b % c)) % c << endl;
  cout << (a * b) % c << endl;
  cout << ((a % c) * (b % c)) % c << endl;
}