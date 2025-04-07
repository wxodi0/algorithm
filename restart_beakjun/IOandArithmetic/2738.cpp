#include <iostream>
#include <string>

using namespace std;

int main() {
  int board[101][101] = {0,};
  int n, m, num = 0;

  cin >> n >> m;

  for(int p = 0; p < 2; p++) {
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> num;
        board[i][j] += num;
      }
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cout << board[i][j] << " ";
    }
    cout << '\n';
  }
}