#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a[5] = {0,}, num = 0;
  
  for(int i = 0; i < 5; i++) {
    cin >> a[i];
    num += a[i];
  }

  sort(a, a + 5);

  cout << num/5 << '\n' << a[2];
}