#include <iostream>
int main() {
  int a[4];
  int cnt = 0;
  int coin = 0;
  int max = 0;

  for(int i=0; i < 3; i++) {
    scanf("%d", &a[i]);
  }

  if(a[0] == a[1] && a[1] == a[2]) {
    coin = 10000 + (a[0]*1000);
  }
  else if(a[0] == a[1] || a[1] == a[2] ) {
    coin = 1000 + (a[1]*100);
  }else if (a[0] == a[2]) {
    coin = 1000 + (a[0]*100);
  }else {
    for(int i=0; i < 3; i++) {
      if(max < a[i]){
          max = a[i];
        }
    }
    coin += max * 100;
  }

  printf("%d", coin);

}