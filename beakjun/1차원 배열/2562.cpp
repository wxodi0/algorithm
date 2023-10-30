#include <iostream>
int main() {
  int a[10] = {0,};
  int max = 0;
  for(int i = 0; i < 9; i++){
    scanf("%d",&a[i]);
    if(max < a[i]){
      max = a[i];
    }
  }

  for(int i = 0; i < 9; i++){
    if(max == a[i]) {
      printf("%d\n%d",a[i],i+1);
    }
  }
}