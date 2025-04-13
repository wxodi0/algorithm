#include <iostream>
using namespace std;

int main() {
  int price, tempPrice;
  int n, tn;

  cin >> price >> n;

  for(int i = 0; i < n; i++) {
    cin >> tempPrice >> tn;

    price -= tempPrice * tn;
  }

  if(price == 0) {
    cout << "Yes";
  }else {
    cout << "No";
  }
}

