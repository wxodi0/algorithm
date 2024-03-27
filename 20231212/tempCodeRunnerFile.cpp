#include <iostream>
using namespace std;

int main() {
  int n, p, q, m;
  int num = 0;

  cin >> n;
  for(int i = 0; i < n; i++)  {
    cin >> num >> m;
    for(int i = 0; i < m; i++) {
      cin >> p >> q;
      num += p * q;
    }
    cout << num;
  }
}