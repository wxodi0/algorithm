#include <iostream>
using namespace std;

int main() {
  int a, b;
  int temp;

  cin >> a >> b;
  temp = b;

  while(temp) {
    cout << a * (temp%10) << '\n';
    temp/=10;
  }

  cout << a * b;
}
