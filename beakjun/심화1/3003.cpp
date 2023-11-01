#include <iostream>
int main() {
  int ch[7] = {1, 1, 2, 2, 2, 8}; 
  int chs[7] = {0,};
  int a;

  for(int i = 0; i < 6; i++) {
    scanf("%d",&a);
    chs[i] = a;
  }
  for(int i = 0; i < 6; i++) {
    printf("%d ",ch[i] - chs[i]);
  }
}