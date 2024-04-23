#include <iostream>
using namespace std;

int main() {
  int m, d;
  int num = 0;

  cin >> m >> d;

  for(int i = 1; i < m; i++) {
    if(i == 2) {
      num += 28;
    } else if(i == 4 || i == 6 || i == 9 || i == 11) {
      num += 30;
    } else {
      num += 31;
    }
  }

  num += d;

  if(num % 7 == 0) {
    cout << "SUN";
  } else if(num % 7 == 1) {
    cout << "MON";
  }else if(num % 7 == 2) {
    cout << "TUE";
  } else if(num % 7 == 3) {
    cout << "WED";
  } else if(num % 7 == 4) {
    cout << "THU";
  } else if(num % 7 == 5) {
    cout << "FRI";
  } else if(num % 7 == 6) {
    cout << "SAT";
  } 
}