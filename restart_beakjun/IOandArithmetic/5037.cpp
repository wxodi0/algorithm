#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a[3];
  while(1) {
    for(int i = 0; i < 3; i++) {
      cin >> a[i];
    }

    if(a[0] == 0 && a[1] == 0 && a[2] == 0) break;

    sort(a, a + 3);

    if(a[2] - (a[1] + a[0]) < 0) {
      if(a[0] == a[1] && a[0] == a[2]) {
        cout << "Equilateral";
      } else if(a[0] == a[1] || a[0] == a[2] || a[1] == a[2]) {
        cout << "Isosceles";
      } else {
        cout << "Scalene";
      }
    } else {
      cout << "Invalid";
    }
    cout << '\n';
  }
}