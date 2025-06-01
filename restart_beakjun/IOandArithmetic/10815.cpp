
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
  int n, m, k;
  vector<int> v1;
  vector<int> v2;
  
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
  v1.erase(unique(v1.begin(), v1.end()), v1.end());

  for(int i = 0; i < m; i++) {
    auto it = lower_bound(v1.begin(), v1.end(), v2[i]);
    if(it != v1.end() && *it == v2[i]) {
      cout << '1' << ' ';
    } else {
      cout << '0' << ' ';
    }
  }
}