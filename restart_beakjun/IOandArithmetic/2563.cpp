#include <iostream>
using namespace std;

int main() {
  int board[101][101] = {0,}, num = 0;

  int n, x, y;

  cin >> n;

  for(int k = 0; k < n ; k++) {
    cin >> x >> y;

    for(int i = x + 1; i <= x + 10; i++) {
      for(int j = y + 1; j <= y + 10; j++) {
        board[i][j] = 1;
      }
    }
  }


  for(int i = 1; i < 101; i++) {
    for(int j = 1; j < 101; j++) {
      if(board[i][j] == 1) {
        num++;
      }
    }
  }

  cout << num;
}