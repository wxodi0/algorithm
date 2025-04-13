#include <iostream>
#include <string>
using namespace std;

int main() {
  string n;
  int num = 1;

  cin >> n;

  for(int i = 0; i < n.length()/2; i++) {
    if(n[i] != n[n.length() - 1 - i]) {
      num = 0;
    };
  }

  cout << num;
}