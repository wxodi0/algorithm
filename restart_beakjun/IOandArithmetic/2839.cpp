#include <iostream>
using namespace std;

int main() {
  int n, cnt = 0;

  cin >> n;

  while(n > 0) {
    if(n < 3) {
      cnt = -1;
      break;
    }

    if(n % 5 == 0) {
      cnt += n / 5;
      break;
    }

    cnt++;
    n -= 3;
  }

  cout << cnt;
}