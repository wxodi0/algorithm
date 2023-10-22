#include <iostream>
int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  if(a == 0 & b == 0) {
    printf("원점입니다.");
  }

  if(a > 0 && b > 0) {
    printf("1");
  }
  if(a > 0 && b < 0) {
    printf("4");
  }
  if(a < 0 && b > 0) {
    printf("2");
  }
  if(a < 0 && b < 0) {
    printf("3");
  }
}