#include <iostream>
int main() {
  int max = 0;
  double av = 0;
  int n, num[1001] = {0,};
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
    if(max < num[i]) {
      max = num[i];
    }
  }
  for(int i = 0; i < n; i++) {
    av += (double)num[i]/max*100;
  }

  printf("%f", av/n);
}