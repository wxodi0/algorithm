#include <iostream>
#include <string>
using namespace std;

int main() {
  string num;
  int n, i = 665, cnt = 0;

  cin >> n;

  while(i++) {
    num = to_string(i);

    if(num.find("666") != string::npos) {
      cnt++;
    }

    if(n == cnt) break;
  }

  cout << num;
}