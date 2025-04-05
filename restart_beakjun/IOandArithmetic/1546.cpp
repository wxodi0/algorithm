#include <iostream>
using namespace std;

int main() {
  int a[1001] = {0,};
  double n, num = 0, max = 0;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] > max) {
      max = (double)a[i];
    }
  }

  for(int i = 0; i < n; i++) {
    num += (double)a[i]/max*100.0;
  }
  
  cout << num / n;
}

//cout << fixed;
//cout.precision(3);