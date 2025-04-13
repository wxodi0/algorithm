#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int> dq;
  int n, k;

  cin >> n >> k;

  for(int i = 1; i <=n; i++) {
    if(n % i == 0) {
      dq.push_back(i);
    }
  }

  if (k <= dq.size()) {
    cout << dq[k - 1];
  } else {
    cout << 0;
  }

}