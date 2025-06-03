#include <iostream>
using namespace std;

int main() {
  int n, m = 0, num = 0, ck = 0;
  int i = 0;

  cin >> n;

 

  for(i = 1; i <= n; i++) {
    num = 0;
    m = i;
    while(m > 0) {
      num += m % 10;
      m/=10;
    }
  
    if(n - i == num) {
      ck = 1;
      break;
    }
  }

  if(ck == 1) {
    cout << i;
  } else {
    cout << ck;
  }
}