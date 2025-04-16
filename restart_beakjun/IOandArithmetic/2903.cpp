#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, num = 2, result = 0;

  cin >> n;

  for(int i = 0; i < n; i++) {
    num += num - 1;
  }

  cout << num*num;
}

//  4  > 9  > 25 > 81
//  2² > 3² > 5² > 9²