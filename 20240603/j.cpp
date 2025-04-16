#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, m, no = 0;

  int can = 0;

  cin >> n >> m;

  string t;

  cin >> t;

  for(int i = 0; i < n; i++) {
    no = 0;
    if(t[i] != '1') {
      for(int j = 1; j <= m; j++) {
        if(t[i + j] == '1' || t[i - j] == '1' || t[i] == '1') {
          no = 1;
        }
      }
      if(no == 0) {
        can += 1;
        t[i] = '1';
      }
    }
  }

  cout << can;
}