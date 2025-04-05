#include <iostream>
#include <string>

using namespace std;

int main() {
  string a;
  int n, num = 0;

  cin >> n >> a;

  for(int i = 0; i < n; i++) {
    num += a[i] - '0';
  }

  cout << num;
}