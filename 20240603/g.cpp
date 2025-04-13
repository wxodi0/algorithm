#include <iostream>
#include <string>
using namespace std;

int main() {
  string a;

  int num = 0;

  int check = 1;

  while(check) {

    cin >> a;

    // if(a.empty()) {
    //   check = 0;
    // }

    for(int i = 0; i < a.length(); i++) {
      if(a[i] == '.') {
        num += 1;
      }
    }
  }

  cout << num;
}