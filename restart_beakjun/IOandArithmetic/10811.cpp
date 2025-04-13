#include <iostream>
using namespace std;

int main() {
  int n, m;
  int num[101] = {0,};
  int a, b, temp = 0;

  cin >> n >> m;

  for(int i = 1; i <= n; i++) {
    num[i] = i;
  }

  for(int i = 0; i < m; i++) {
    cin >> a >> b;
    for(int j = 0; j <= (b - a)/2; j++) {
      temp = num[a+j];
      num[a+j] = num[b-j];
      num[b-j] = temp;
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << num[i] << " ";
  }
}