#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main() {

  int n, m, tmp = 0;
  
  cin >> n >> m;
  for(int i = 1; i <= n; i++) {
    q.push(i);
  }

  cout << "<";

  while(q.size() > 1) {
    for(int i = 0; i < m - 1; i++) {
      tmp = q.front();
      q.push(tmp);
      q.pop();
    }
    cout << q.front() << ", ";
    q.pop();
  }
  cout << q.front() << ">";
  return 0;
}