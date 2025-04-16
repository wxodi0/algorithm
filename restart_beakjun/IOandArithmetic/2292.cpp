#include <iostream>
using namespace std;

int main() {
  int n, cnt = 1;
  int i = 1, j = 1;
  
  cin >> n;

  if(n == 1) {
    cout << 1;
    return 0;
  }

  while(1) {
    if(n - j > 0) {
      n -= j;
    } else {
      break;
    }    
    
    j = i * 6;
    cnt++;
    i++;
  }

  cout << cnt;
}