#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int m = 0, num = 0;
  string n;

  cin >> n >> m;  

  for(int i = 0; i < n.length(); i++) {
    if(int(n[i]) < 65) {
      num += (int(n[i]) - 48) * pow(m, n.length() - i - 1);
    } else {
      num += (int(n[i]) - 55) * pow(m, n.length() - i - 1);
    }
  }

  cout << num;
}


//1 = 49
//2 = 50
//.
//.
//9 = 57