#include <iostream>
#include <string.h>

int main() {
  char a[1001];
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n ; i++) {
    scanf("%s",&a);
    printf("%c%c\n",a[0],a[strlen(a)-1]);
    a[1001] = {};
  }
  return 0;
}