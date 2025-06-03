#include <iostream>
using namespace std;

int main() {
  int a[101] = {0,};
  int n, m, max = 0, num = 0;

  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    cin >> a[i]; 
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) continue;
      for(int k = 0; k < n; k++) {
        if(i == k || j == k) continue;
        num = a[i] + a[j] + a[k];
        if(m >= num) {
          if(max < num) {
            max = a[i] + a[j] + a[k];
          }
        }
      }
    }
  }

  cout << max;
}