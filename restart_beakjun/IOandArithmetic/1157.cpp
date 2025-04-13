#include <iostream>
#include <string>
using namespace std;

int main() {
  int num[27] = {0,}, m = 0, max = 0, cnt = 0;
  string n;

  cin >> n;

  for(int i = 0; i < n.length(); i++) {
    m = n[i] - '0';

    if(m >= 49) {
      num[m - 49] += 1;
      if(num[m - 49] > max) {
        max = num[m - 49];
      }
    }else {
      num[m - 17] += 1;
      if(num[m - 17] > max) {
        max = num[m - 17];
      }
    } 
  }

  for(int i = 0;  i < 27; i++) {
    if(num[i] == max) {
      cnt += 1;
    }
  }

  if(cnt > 1) {
    cout << '?';
  }else {
    for(int i = 0;  i < 27; i++) {
      if(num[i] == max) {
        cout << char(i + 65);
      }
    }
  }
}

//a: 49, A: 17