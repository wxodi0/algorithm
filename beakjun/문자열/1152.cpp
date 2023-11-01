#include <iostream>
#include <string>
using namespace std;
int main() {
  string a;
  int cnt = 1;

  getline(cin, a);

  if(a.length() == 1 && a[0] == ' ') {
    printf("0");
    return 0;
  }

  for(int i = 0; i <= a.length() - 1; i++) {
    if(a[i] == ' ') {
      cnt++;
    }
  }

  if(a[0] == ' ') {
    cnt--;
  }
  if(a[a.length()-1] == ' ') {
    cnt--;
  }
  printf("%d",cnt);
}