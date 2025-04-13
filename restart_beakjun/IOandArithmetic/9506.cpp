#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int> dq;
  int n, m;

  while(1) {
    cin >> n;

    if(n == -1) {
      break;
    }

    m = n;

    for(int i = 1; i < n; i++) {
      if(n % i == 0) {
        dq.push_back(i);
        m -= i;
      }
    }

    if(m == 0) {
      cout << n << " = ";
      for(int i = 0; i < dq.size(); i++) {
        cout << dq[i];
        if(i != dq.size() - 1) {
          cout << " + ";
        }
      }
      
      cout << '\n';
    } else {
      cout << n << " is NOT perfect." << '\n';
    }

    dq.clear();
  }
}