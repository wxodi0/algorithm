#include <iostream>
using namespace std;
int num;

int main() {
  string a;

  cin >> a;

  for(int i = 0; i < a.length(); i++) {
    if(a[i] == '4') {
      continue;
    }
    else {
      cout << a[i];
    }
  }
}