#include <stdio.h>
int main() {
  long long int num = 0;
  int g,u,n,l;
  int use = 0;
  scanf("%d %d %d %d",&g, &u, &n, &l);
  if(g == 13) {
    num += 570;
  } else if(g == 20) {
    num += 1330;
  } else if(g == 25) {
    num += 2560;
  }
  use = n - l;
  if(u == 1) {
    if(use >= 51) {
      num += use * 990;
    }else if(use >= 41) {
      num += use * 860;
    }else if(use >= 31) {
      num += use * 710;
    }else if(use >= 21) {
      num += use * 570;
    }else if(use >= 11) {
      num += use * 520;
    }else if(use >= 0) {
      num += use * 460;
    }
  }else if(u == 2) {
    if(use >= 301) {
      num += use * 1670;
    }else if(use >= 101) {
      num += use * 1250;
    }else if(use >= 51) {
      num += use * 1080;
    }else if(use >= 21) {
      num += use * 1000;
    }else if(use >= 0) {
      num += use * 970;
    }
  }
  printf("%lld", num);

  return 0;
}