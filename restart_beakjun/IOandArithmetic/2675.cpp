#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, m;
  string str;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> m;
    cin >> str;
    for(int j = 0; j < str.length(); j++) {
      for(int k = 0; k < m; k++) {
        cout << str[j];
      }
    }
    cout << '\n';
  }
}