#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  vector<string> v;
  map<string, int> mp;
  string str;
  int n, m;

  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    cin >> str;
    mp.insert({str, 1});
  }

  for(int i = 0; i < m; i++) {
    cin >> str;
    mp[str] += 1;
  }

  for (const auto& map : mp) {
    if(map.second == 2) {
      v.push_back(map.first);
    }
  }

  cout << v.size() << '\n';
  for(auto iter = v.begin(); iter != v.end(); iter++) {
    cout << *iter << '\n';    
  }
}

