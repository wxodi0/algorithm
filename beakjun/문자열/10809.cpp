#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char a[101];
  int num = 0;
  int idx[27] = {-1,};
  scanf("%s",&a);
  //-1로 초기화
  for(int i = 0; i <= 26; i++) {
    idx[i] = -1;
  }

  for(int i = 0; i < strlen(a); i++) {
    num = a[i];
    if(idx[num - 97] == -1){
      idx[num - 97] = i; 
    }
  }
  for(int i = 0; i < 26; i++) {
    printf("%d ",idx[i]);
  }
}