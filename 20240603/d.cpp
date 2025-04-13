#include <iostream>
using namespace std;

int main() {
  int a[101];
  int num = 0;

  for( int i = 0; i < 4; i++) {
    cin >> a[i];
  }

  for( int i = 0; i < 4; i++) {
    if(a[0] < a[i]) {
      num++;
    }
  }

  cout << num;
}