#include <iostream>
int main() {
  int n, b, c;
  scanf("%d", &n);
  for(int i = 1; i <= n ; i++) {
    scanf("%d %d", &b, &c);
    printf("Case #%d: %d + %d = %d\n",i , b, c, (b + c));
  }

  return 0;
}