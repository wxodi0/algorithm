#include <iostream>
int main() {
  int n;
  int max = 0,max2 = 0, min = 1000;

  int a[10001] = {0,};

  scanf("%d", &n);

  for(int i=0;i<n;i++) {
    scanf("%d" ,&a[i]);
  }

  for(int i=0; i<n;i++) {
    if(max < a[i]) {
      max = a[i];
    }
  }

  for(int i=0;i<n;i++) {
    if(max == a[i]) {
      continue;
    }
    if(max2 < a[i]) {
      max2 = a[i];
    }
    if(min > a[i]) {
      min = a[i];
    }
  }
  printf("%d", max2 - min);
}