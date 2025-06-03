#include <iostream>
#include <algorithm>
//가장 긴 변의 길이보다 나머지 두 변의 길이의 합이 길지 않으면
using namespace std;

int main() {
  int a[3] = {0,};

  for(int i = 0; i < 3; i++) {
    cin >> a[i];
  }

  sort(a, a + 3);

  while(1) {
    if(a[2] < a[1] + a[0]) {
      cout << a[0] + a[1] + a[2];
      break;
    }

    a[2] -= 1;
  }
}