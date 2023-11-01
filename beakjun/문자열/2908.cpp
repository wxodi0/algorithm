#include <iostream>
int main() {
  int a[4] = {0,}, b[4] = {0,};
  int num1 = 0, num2 = 0, j = 1;

  for(int i = 0; i < 3; i++) {
    scanf("%1d",&a[i]);
  }
  for(int i = 0; i < 3; i++) {
    scanf("%1d",&b[i]);
  }
  for(int i = 0; i < 3; i++) {
    num1 += a[i] * j;
    num2 += b[i] * j;
    j*=10;
  }

  printf("%d",num1 > num2 ? num1 : num2);
}