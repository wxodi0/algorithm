#include <iostream>
using namespace std;

int main() {
  int n, num;
  int max = -1000000, min = 1000000;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> num;

    if(max < num) {
      max = num;
    }

    if(min > num) {
      min = num;
    }
  }

  cout << min << " " << max;
}