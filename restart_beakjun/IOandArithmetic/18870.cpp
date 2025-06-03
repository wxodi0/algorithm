#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> m;
    v.push_back(m);
  }

  vector<int> cv(v);

  sort(cv.begin(), cv.end());
  cv.erase(unique(cv.begin(), cv.end()), cv.end());

  for(int i = 0; i < n; i++) {
    //auto it = find(cv.begin(), cv.end(), v[i]);
    auto it = lower_bound(cv.begin(), cv.end(), v[i]);
    cout << it - cv.begin() << ' ';
  }
}