#include <iostream>
int main(){
  int a[43] = {0,};
  int n, num = 0;
  
  for(int i = 0; i < 10; i++) {
    scanf("%d", &n);
    a[n%42] = 1;
  }

  for(int i = 0; i < 42 ; i++) {
    if(a[i] == 1) {
      num++;
    }
  }

  printf("%d", num);
}