#include <iostream>
using namespace std;

int main() {
  int a, state;

  cin >> a;

  if(a % 4 == 0) {
    if(a % 100 != 0 || a % 400 == 0) {
      cout << "1";
    }
    else {
      cout << "0";
    }
  }else {
    cout << "0";
  }
}