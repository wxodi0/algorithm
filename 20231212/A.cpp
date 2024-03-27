#include <iostream>
int main() {
  int n ,a[101][101] ={0,};
  int cnt = 0;
  int num = 0;

  scanf("%d",&n);

  for(int i=0;i<n;i++) {
    scanf("%d", &num);
    a[i][0] = num / 10;
    a[i][1] = num % 10;
  }

  for(int i=0; i < n - 1;i++) {
    if(a[i][0] == a[i+1][0] && a[i][1] == a[i+1][1]) {
      cnt++;
    }
  }

  if(cnt == n - 1) {
    printf("1");
  }else {
    printf("%d",cnt);
  }

  return 0;
}