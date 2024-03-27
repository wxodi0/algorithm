#include <iostream>
using namespace std;

int f[101] = {0,};

int fibonacci(int n) {
  f[0] = 0;
  f[1] = 1;
  f[2] = 1;

  for(int i = 3; i <= n ; i++ ) {
    f[i] = f[i - 1] + f[i - 2];
  }

  return f[n];
}

int main() {
  int n;
  
  cin >> n;
  

  cout << fibonacci(n) << " " << n - 2;
}