#include <iostream>
using namespace std;

int main() {
  int a, b, c, num = 0;
  cin >> a >> b >> c;

  if((a + b + c) == 180) {
    if(a == b && a == c) {
      cout << "Equilateral";
    } else if(a == b || a == c || b == c) {
      cout << "Isosceles";
    } else {
      cout << "Scalene";
    }
  } else {
    cout << "Error";
  }
}