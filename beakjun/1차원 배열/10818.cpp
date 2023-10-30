#include <iostream>
int main() {
  int n, m;
  int max = -1000000, min = 1000000;
  scanf("%d",&n);
  for(int i = 0;i < n ; i++) {
    scanf("%d", &m);
    if(max < m) {
      max = m;
    }
    if(min > m) {
      min = m;
    }
  }
  printf("%d %d", min, max);
}