#include <iostream>
using namespace std;

int main() {
  int n;
  int t[1001] = {0,}, p[1001] = {0,}, r[1001] = {0,};

  cin >> n;

  for(int i = 1; i <= n; i++){
    cin >> t[i] >> p[i];
  }

  for(int i = n; i > 0; i--){
    if(t[i] > n - i + 1) {
      r[i] = r[i+1];
    }
    else {
      r[i] = max(p[i] + r[i+t[i]], r[i+1]);
    }
  }

  cout << r[1];

  return 0;
}