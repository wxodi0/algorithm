#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  map<int, int> mp;
  int n, m, num, cnt = 0;

  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    cin >> num;

    mp[num] = 1;
  }

  for(int i = 0; i < m; i++) {
    cin >> num;

    mp[num] += 1;
  }

  for(const auto& map : mp) {
    if(map.second == 1) {
      cnt++;
    }
  }

  cout << cnt;
}