#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main() {
  char a[101];
  int num = 0;
  int n;
  scanf("%d %s",&n ,&a);

  for(int i = 0;i < n; i++) {
    num += a[i] - '0';
  }
  printf("%d",num);
}