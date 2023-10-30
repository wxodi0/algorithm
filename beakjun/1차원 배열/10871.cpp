#include <iostream>
int main() {
  int n, m, a;
  scanf("%d %d",&n, &m);
  for(int i = 0; i < n; i++) {
    scanf("%d",&a);
    if(m > a) {
      printf("%d ", a);
    }
  }
}