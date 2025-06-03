#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

int main() {
  int n, mk, my;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> mk >> my;

    v.push_back({mk, my});
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < n; i++) {
    cout << v[i].first << ' ' << v[i].second << '\n';
  }
}