#include <iostream>
#include <string>
using namespace std;

int main() {
  string n;

  int m;

  cin >> m;

  for(int i = 0; i < m; i++) {
    cin >> n;
    if(n.length() >= 10) {
      cout << n[0] << n.length() - 2 << n[n.length()-1] << endl;
    }else {
      cout << n << endl;
    }
  }
}