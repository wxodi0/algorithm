#include <iostream>
using namespace std;

int main() {
  int a;
  int n, x;

  cin >> n >> x;

  for(int i = 0; i < n; i++) {
    cin >> a;
    if(a < x){
      cout << a << " ";
    }
  }
}