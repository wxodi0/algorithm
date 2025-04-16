#include <iostream>
using namespace std;

int main() {
  int n, m = 1, arrayCnt = 1;
  int breakPoint = 0;

  cin >> n;

  while(1) {
    if(m % 2 == 0) {
      for(int i = 1; i <= m; i++) {
        if(n == arrayCnt) {
          cout << i << "/" << m - (i - 1);
          breakPoint = 1;
          break;
        }
        arrayCnt++;
      }
    } else {
      for(int i = m; i > 0; i--) {
        if(n == arrayCnt) {
          cout << i << "/" << m - (i - 1);
          breakPoint = 1;
          break;
        }
        arrayCnt++;
      }
    }


    if(breakPoint == 1) {
      break;
    }

    m++;
  }
} 