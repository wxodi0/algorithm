#include <iostream>
#include <string>
using namespace std;

int main() {
  string n;
  int num = 1;

  getline(cin,n);

  for(int i = 0; i < n.length() / 2; i++) {
    if(n[i] != n[n.length() - i - 1]) {
      num = 0;
    }
  }
  printf("%d", num);
}