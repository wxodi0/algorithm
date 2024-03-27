#include <iostream>
using namespace std;

int main() {
  int n;
  int p, q;

  int num = 0;

  cin >> n;
  for(int i = 0; i < n; i++) {

    cin >> p >> q;

    if(p < q) {
      num += q % p;
    } else if(p > q) {
      num += q;
    }
  }
  cout << num;
}