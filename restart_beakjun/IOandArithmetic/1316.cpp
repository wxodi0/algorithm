#include <iostream>
#include <string>
using namespace std;

int main() {
  int ch[101][64] = {0,}, notGroup = 0, num = 0;
  string a;
  int n;

  cin >> n;

  for(int i = 0; i < n ; i++) {
    cin >> a;

    notGroup = 0;
    for(int j = 0; j < a.length(); j++) {
      if(ch[i][(a[j] - '0') - 49] == 0) {
        if(a[j] != a[j + 1]) {
          ch[i][(a[j] - '0') - 49] = 1;
        }
      }else {
        notGroup = 1;
      }
    }

    if(notGroup == 0) {
      num ++;
    }
  }

  cout << num;
}