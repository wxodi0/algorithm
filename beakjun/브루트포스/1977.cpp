#include <iostream>
using namespace std;

int main() {
  int n, m;

  long long int num = 0;
  int fnum = 0;

  cin >> n >> m;
  for(int i = 1; i*i <= m; i++) {
    if(i*i >= n && i*i <=m) {
      num += i*i;
      if(fnum == 0) {
        fnum = i*i;
      }
    }
  }
  if(num == 0 && fnum == 0) {
    cout << -1 << endl;
  }else {
    cout << num << endl;
    cout << fnum ;
  }
}