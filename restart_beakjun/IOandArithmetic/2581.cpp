#include <iostream>
using namespace std;

int main() {
  int m, n, ck = 0;
  int num = 0, min = -1;

  cin >> m >> n;

  for(int i = m; i <= n; i++) {
    if(i == 1) continue;

    for(int j = 2; j < i; j++) {
      if(i % j == 0) {
        ck++;
        break;
      }
    }

    if(ck == 0) {
      if(min == -1) {
        min = i;
      }
      num += i;
    } else {
      ck = 0;
    }
  }

  if(min == -1) {
    cout << min;
  } else {
    cout << num << '\n' << min;
  }
}