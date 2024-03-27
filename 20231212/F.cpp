#include <iostream>

int name[101][101];
int main() {
  int j,n,m;
  char teacherName[101];

  int message = 1;

  scanf("%d %d %d",&j ,&n, &m);
  
  for(int i=0 ; i < j; i++ ) {
    scanf("%s", teacherName);

    for(int p = i ;p < n; p++) {
      for(int k = 0; k < m ; k++) {
        name[p][k] = teacherName[k];
      }
    }
  }
  for(int i = 0 ;i < j*n; i++) {
      if(name[i][0] != 's') {
        message = 0;
      }else if(name[i][1] != 'o') {
        message = 0;
      }else if(name[i][2] != 'r') {
        message = 0;
      }else if(name[i][3] != 'a') {
        message = 0;
      }
  }

  if(message == 1) {
    printf("yes");
  }else {
    printf("no");
  }
}