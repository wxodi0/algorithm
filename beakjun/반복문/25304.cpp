#include <iostream>
int main() {
  int allCoin,n;
  int price, m;
  int num = 0;
  scanf("%d %d", &allCoin, &n);
  
  for(int i = 0; i < n; i ++) {
    scanf("%d %d", &price, &m);
    num += (price * m);
  }

  if(num == allCoin) {
    printf("Yes");
  }else {
    printf("No");
  }
}