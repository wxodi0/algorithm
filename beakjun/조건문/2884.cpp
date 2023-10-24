#include <iostream>
int main() {
  int a, b;
  int num = 0;
  int setTime = 45; //당길 알람 시간

  scanf("%d %d", &a, &b);
  num = (a*60) + b - setTime;

  if(num < 0) {
    num += 1440;
    printf("%d %d", num/60, num%60);
  }else{
    if(num > 1440) {
      num -= 1440;
      printf("%d %d", num/60, num%60);
    }else {
      printf("%d %d", num/60, num%60);
    }
    
  }

  return 0;
}