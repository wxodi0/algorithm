#include <iostream>
#include <string>
using namespace std;

int main() {
  string a;
  int cnt = 0;

  getline(cin, a);

  if(a[0] != ' ') {
    cnt++;
  }
  for(int i = 0; i < a.length() - 1; i++) {

    if((a[i] == ' ') && (a[i+1] != ' ')) {
      cnt++;
    }
  }

  cout << cnt;
}