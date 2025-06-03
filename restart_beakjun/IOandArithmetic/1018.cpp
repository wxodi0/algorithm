#include <iostream>
#include <string>
<<<<<<< HEAD
#include <cmath>
using namespace std;

char board[50][50];


int startW(int k, int p) {
  int fixCnt = 0;

  for(int i = k; i < k + 8; i++) {
    for(int j = p; j < p + 8; j++) {
      if(i % 2 == 0) {
        if(j % 2 == 0) {
          if(board[i][j] != 'W') {
            fixCnt++;
          }
        } else {
          if(board[i][j] != 'B') {
            fixCnt++;
          }
        }
      } else {
        if(j % 2 == 0) {
          if(board[i][j] != 'B') {
            fixCnt++;
          }
        } else {
          if(board[i][j] != 'W') {
            fixCnt++;
          }
        }
      }
    }
  }

  return fixCnt;
}

int startB(int k, int p) {
  int fixCnt = 0;

  for(int i = k; i < k + 8; i++) {
    for(int j = p; j < p + 8; j++) {
      if(i % 2 == 0) {
        if(j % 2 == 0) {
          if(board[i][j] != 'B') {
            fixCnt++;
          }
        } else {
          if(board[i][j] != 'W') {
            fixCnt++;
          }
        }
      } else {
        if(j % 2 == 0) {
          if(board[i][j] != 'W') {
            fixCnt++;
          }
        } else {
          if(board[i][j] != 'B') {
            fixCnt++;
          }
        }
      }
    }
  }

  return fixCnt;
}



int main() {
  int n, m, minResult = 64, result = 0;
=======
using namespace std;

int main() {
  int n, m;
  string str[51][51];
>>>>>>> 027b98527de5f4dd2ba2b25c6dcac5d6e5030091

  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
<<<<<<< HEAD
      cin >> board[i][j];
    }
  }

  for(int k = 0; k <= n - 8; k++) {
    for(int p = 0; p <= m - 8; p++) {
      result = min(startW(k, p), startB(k, p));
      if(minResult > result) {
        minResult = result;
      }
    }
  }

  cout << minResult;
=======
      cin >> str[i][j];
    }
  }

  
>>>>>>> 027b98527de5f4dd2ba2b25c6dcac5d6e5030091
}