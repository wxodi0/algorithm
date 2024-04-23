#include <iostream>
using namespace std;

int a[1000001] = {0,};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  int n, m;
  int num = 0;
  int ma = 0, cnt = 1;

  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++) {
    num = 0;
    for(int j = i; j < i + m; j++) {
      num += a[j];
    }
    if(ma == num) {
      cnt++;
    } else {
      ma = max(num, ma);
    }
  }

  if(ma != 0) {
    cout << ma << "\n" << cnt;
  } else {
    cout << "SAD";
  }

}