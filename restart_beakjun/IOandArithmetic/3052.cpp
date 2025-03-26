#include <iostream>
using namespace std;

int main() {
  int a[43] = {0,};
  int n, cnt = 0;

  for(int i = 0; i < 10; i++) {
    cin >> n;

    a[n%42] = 1;
  }

  for(int i = 0; i < 42; i++) {
    if(a[i] == 1) {
      cnt++;
    }
  }
  
  cout << cnt;
}