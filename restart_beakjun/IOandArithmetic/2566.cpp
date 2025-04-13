#include <iostream>
using namespace std;

int main() {
  int board[10][10] = {0,};
  int max = 0, maxX = 0, maxY = 0;

  for(int i = 1; i <= 9; i++) {
    for(int j = 1; j <= 9; j++) {
      cin >> board[i][j];
      if(board[i][j] >= max) {
        max = board[i][j];
        maxX = i;
        maxY = j;
      }
    }
  }

  cout << max << '\n';
  cout << maxX << " " << maxY;
}