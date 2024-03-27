#include <iostream>
int main() {
  int k,n,i;
  int num = 0;

  scanf("%d %d %d",&k,&n,&i);

  if(i == 1) {
    num = k;
  }else {
    num = ((i-1) * k) + (k*i);
  }

  if(n < num) {
    if(num % 10 > 0) {
      num = ((num/10) + 1) * 10;
    }
    num -= n;
  }else {
    num = 0;
  }

  printf("%d",num);
}