#include <iostream>
int main() {
  int a[31] = {0,};
  int b, num = 0, num2 = 0;
  for(int i = 0; i < 28; i++) {
    scanf("%d", &b);
    a[b] = 1;
  }

  for(int i = 1; i <= 30; i++) {
    if(a[i] == 0) {
      if(num == 0) {
        num = i;
      }
      else if(num2 == 0) {
        num2 = i;
      }
    }
  }
  printf("%d\n%d", num<num2?num:num2, num>num2?num:num2);
}