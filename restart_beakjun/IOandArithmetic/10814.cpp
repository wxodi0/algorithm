#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<pair<int, string>> v;

int cmp(pair<int, string> a, pair<int, string> b) {
  return a.first < b.first;
}

int main() {
  int n, age;
  string name;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> age >> name;
    v.push_back({age, name});
  }

  stable_sort(v.begin(), v.end(), cmp);

  for(int i = 0; i < n; i++) {
    cout << v[i].first << " " << v[i].second << '\n';
  }
}