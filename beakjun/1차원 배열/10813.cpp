#include <iostream>
int main(){
  int n, m, x, y, temp = 0;
  int a[101] = {0,};
  scanf("%d %d", &n, &m);

  for(int i = 1; i <= n; i++) {
    a[i] = i;
  }

  for(int i = 0; i < m; i++) {
    scanf("%d %d",&x ,&y);
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
  }

  for(int i = 1; i <= n; i++) {
    printf("%d ",a[i]);
  }

  return 0;
}