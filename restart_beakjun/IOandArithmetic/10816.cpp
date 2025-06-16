#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0);
  
  vector<int> v1;
  vector<int> v2;
  int n, m, k;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> k;
    v1.push_back(k);
  }

  cin >> m;

  for(int i = 0; i < m; i++) {
    cin >> k;
    v2.push_back(k);
  }

  sort(v1.begin(), v1.end());

  for(int i = 0; i < m; i++) {
    auto it = upper_bound(v1.begin(), v1.end(), v2[i]) - lower_bound(v1.begin(), v1.end(), v2[i]);

    cout << it << ' ';
  }
}