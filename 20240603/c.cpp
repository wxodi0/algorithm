#include <iostream>
#include <string>
using namespace std;

int main() {
  char a[10];

  char t;

  scanf("%s", a);

  int year = 0, month = 0, day = 0;

  if(a[7] == '1' || a[7] == '3') {
    t = 'M';
    if(a[7] == '1') {
      year = 19;
    }
    else {
      year = 20;
    }
  }
  else {
    t = 'F';
    if(a[7] == '2') {
      year = 19;
    }
    else {
      year = 20;
    }
  }

  cout << year << a[0] << a[1] << '/' << a[2] << a[3] << '/' << a[4] << a[5] << ' '  << t ;


}