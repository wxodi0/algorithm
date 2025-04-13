#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

int main() {
  cout << setprecision(1000001);
  int a, b;
  double num = 0;
  int n, c = 0;

  cin >> a >> b >> n;

  for(int i = 0; i < n + 1; i++) {
    num = a / b;
    a = a % b * 10;
  }
  cout << int(num) % 10;
}