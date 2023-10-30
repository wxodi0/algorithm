#include <iostream>
int main() {
  int n, m, num = 0;
  int a[101] = {0,};
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  scanf("%d",&m);
  for(int i = 0; i < n; i++) {
    if(a[i] == m){
      num++;
    }
  }

  printf("%d", num);
}