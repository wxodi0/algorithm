#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string a;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> a;
    cout << a[0] << a[a.length()-1] << '\n';
  }
}
