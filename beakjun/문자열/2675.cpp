#include <iostream>
#include <string.h>
using namespace std;
int main() {
  int n, m;
  char a[21];
  scanf("%d",&n);
  for(int i=0;i < n; i++) {
    scanf("%d %s",&m, &a);
    for(int j = 0; j < strlen(a) ; j++) {
      for(int k = 0; k < m; k++) {
        printf("%c",a[j]);
      }
    }
    printf("\n");
  }
}