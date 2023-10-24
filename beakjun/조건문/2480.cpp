#include <iostream>
int main() {
  int a[4];
  int cnt = 0;
  int coin = 0;
  int max = 0;

  for(int i=0; i < 3; i++) {
    scanf("%d", &a[i]);
  }

  for(int i=0; i < 3; i++) {
    for(int j=i+1; j < 3; j++) {
      if(a[i] == a[j]) {
        cnt += 1;
        max = a[i];
        printf("%d\n",cnt);
      }else {
        if(a[i] > max) {
          max = a[i];
        }
      }
    }
  }

  if(cnt == 1) {
    coin = 1000 + (max*100);
    printf("%d", coin);
  }else if(cnt > 2) {
    coin = 10000 + (max*1000);
    printf("%d", coin);
  }else {
    coin += max * 100;
    printf("%d", coin);
  }

}