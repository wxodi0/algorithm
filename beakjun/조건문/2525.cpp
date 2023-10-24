#include <iostream>
int main() {
  int a, b;
  int setTime = 0;
  int num = 0;

  scanf("%d %d %d", &a ,&b, &setTime);

  num = (a*60) + b + setTime;

  if(num >= 1440) {
    num -= 1440;
    printf("%d %d", num/60, num%60);
  }else {
    printf("%d %d", num/60, num%60);
  }
  return 0;
}