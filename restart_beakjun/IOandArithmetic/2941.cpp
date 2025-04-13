#include <iostream>
#include <string>
using namespace std;

int main() {
  string capb[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
  string a;
  int check = 0;

  cin >> a;

  while(1) {
    check = 0;
    for(int i = 0; i < 8; i++) {
      if(a.find(capb[i]) != string::npos) {
        a.replace(a.find(capb[i]), capb[i].length(), "A");
        check = 1;
      }
    }
    if(check == 0) {
      break;
    };
  }
  
  cout << a.length();
}