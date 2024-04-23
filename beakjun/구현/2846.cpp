#include <iostream>
using namespace std;

int main() {
  int n;

  int a[1001] = {0,};

  int result = 0, up = 0;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n - 1; i++) {
    if(a[i] < a[i + 1]) {
      up += a[i + 1] - a[i];
      result = max(up, result);
    }else {
      up = 0;
    }
  }

  if(result == 0) {
    cout << 0;
  }
   else {
    cout << result;
   }
}