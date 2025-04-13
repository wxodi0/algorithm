#include <iostream>
using namespace std;

int main() {
  int max = 0, cnt;
  int n;

  for(int i = 1; i <= 9; i++) {
    cin >> n;
    
    if(n > max) {
      max = n;
      cnt = i;
    }
  }

  cout << max << '\n' << cnt;
}