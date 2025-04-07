#include <iostream>
#include <string>
using namespace std;

int main() {
  string str[6][16], m;

  for(int i = 0; i < 5; i++) {
    cin >> m;
    for(int j = 0; j < m.length(); j++) {
      str[i][j] = m[j];
    }
  }

  for(int i = 0; i < 16; i++) {
    for(int j = 0; j < 5; j++) {
      if(!str[j][i].empty()) {
        cout << str[j][i];
      }
    }
  }
}