#include <iostream>
using namespace std;

int main() {
  int a[101] = {0,};
  int n, m;
  int num = 0;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> m;

  for(int i = 0; i < n; i++) {
    if(a[i] == m) {
      num++;
    }
  }

  cout << num;

}