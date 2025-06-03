#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

int main() {
  int n, a, b;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> b >> a;

    v.push_back({a, b});
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < n; i++) {
    cout << v[i].second << ' ' << v[i].first << '\n';
  }
}