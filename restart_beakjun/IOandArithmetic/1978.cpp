#include <iostream>
using namespace std;

int main() {
  int n, m;
  int num = 0, result = 0;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> m;

    if(m == 1) {
      continue;
    }

    for(int i = 2; i < m; i++) {
      if(m % i == 0) {
        num++;
      }
    }

    if(num == 0) {
      result += 1;
    } else {
      num = 0;
    }
  }

  cout << result;
}