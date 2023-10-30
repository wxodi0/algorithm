#include <iostream>
int main() {
  int bk[101] = {0,};
  int a, b, c;
  int n, m;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < m; i++) {
    scanf("%d %d %d", &a, &b ,&c);
    for(int j = a; j <= b; j++) {
      bk[j] = c;
    }
  }
  for(int i = 1; i <= n; i++) {
    printf("%d ",bk[i]);
  }
}