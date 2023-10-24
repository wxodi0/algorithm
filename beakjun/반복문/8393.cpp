#include <iostream>
int main() {
  int a;
  int num = 0;
  scanf("%d", &a);
  for(int i = 1; i <= a; i++) {
    num += i;
  }
  printf("%d", num);

  return 0;
}