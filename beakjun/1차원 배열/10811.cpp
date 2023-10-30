#include <iostream> 
int main() {
  int a[101] = {0,};
  int n, m;
  int x1, x2, temp = 0;
  scanf("%d %d",&n, &m);
  for(int i = 1; i <= n; i++) {
    a[i] = i;
  }
  for(int i = 0; i < m; i++){
    scanf("%d %d",&x1 ,&x2);
    for(int j = x1; j <= x2; j++) {
      temp = a[j];
      a[j] = a[x2];
      a[x2] = temp;
      x2--;
    }
  }
  for(int i = 1; i <= n; i++) {
    printf("%d ",a[i]);
  }
}