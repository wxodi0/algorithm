#include <iostream>
using namespace std;

int main() {
  int t[10] = {0,};
  long long num = 0, a, b, c;

  cin >> a >> b >> c;

  num = a * b * c;

  while(num > 0) {
    t[num%10]++;
    num /= 10;
  }

  for(int i = 0; i < 10; i++) {
    cout << t[i] << '\n';
  }
}