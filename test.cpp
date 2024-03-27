#include <stdio.h>
int main() {
  int a[5][5] = {
    1,4,3,4,5,
    2,5,3,5,6,
    1,3,4,5,6,
    2,3,8,3,4,
    5,4,1,2,1
  };
  int  i = 0,j= 0;
  int sum = a[i][j];
  while(1) {
    if(i == 4 && j == 4) {
      break;
    }else if(i == 4) {
      j++;
    }else if(j == 4){
      i++;
    }else if(a[i+1][j] >= a[i][j+1]){
      j++;
    }else {
      i++;
    }
    sum += a[i][j];
  }
  printf("%d",sum);
}