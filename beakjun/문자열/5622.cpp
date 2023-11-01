#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char c[16];
  int num = 0, a = 0;
  scanf("%s",&c);
  for(int i = 0; i < strlen(c); i++) {
    a = c[i] - 65;
    if(a < 15) {
        num += a/3 + 2;
    } else {
      if(a <= 18) {
        num += 7;
      } else if (a <= 21) {
        num += 8;
      } else if (a <= 25 ) {
        num += 9;
      }
    }
  }
  printf("%d ",num + strlen(c));
}