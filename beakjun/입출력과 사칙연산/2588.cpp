#include <iostream>
int main() {
  int a, b, i = 1;
  long long int temp = 0,num;

  scanf("%d %d",&a ,&b);
  num = a * b;

  while(1) {
    if(b <= 0) {
      break;
    } else {
      temp = a * (b%10);
      printf("%lld\n", temp);
    }
    b /= 10;
  }
  printf("%d", num);
}