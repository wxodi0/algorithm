#include <iostream>
using namespace std;

int main() {
  int x, y;
  int w, h;

  int num = 1000;

  cin >> x >> y >> w >> h;

  if(w - x > x) {
    if(x < num) {
      num = x;
    }
  }else {
    if(w - x < num) {
      num = w - x;
    }
  }

  if(h - y > y) {
    if(y < num) {
      num = y;
    }
  }else {
    if(h - y < num) {
      num = h - y;
    }
  }

  cout << num;
}