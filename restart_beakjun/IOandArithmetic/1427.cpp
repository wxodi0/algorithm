#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  int a[10] = {0,};

  cin >> str;

  for(int i = 0; i < str.length(); i++) {
    a[int(str[i]) - 48]+=1;
  }

  for(int i = 9; i >= 0; i--) {
    for(int j = 0; j < a[i]; j++) {
      cout << i;
    }
  }
}