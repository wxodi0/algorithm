#include <iostream>
#include <string>
using namespace std;

int dial(int a) {
  if(a > 86) {
    return 10;
  }else if(a > 83) {
    return 9;
  }else if(a > 79) {
    return 8;
  } else if(a > 76) {
    return 7;
  } else if(a > 73) {
    return 6;
  } else if(a > 70) {
    return 5;
  } else if(a > 67) {
    return 4;
  } else if(a > 64) {
    return 3;
  } else {
    return 2;
  }
}

int main() {
  string a;
  int num = 0;

  cin >> a;

  for(int i = 0; i < a.length(); i++) {
    num += dial((int)a[i]);
  }

  cout << num;
}