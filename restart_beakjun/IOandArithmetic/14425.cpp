// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// using namespace std;

// int main() {
//   int n, m, cnt = 0;
//   string str, k;

//   vector<string> v;
//   vector<string> tempV;

//   cin >> n >> m;

//   for(int i = 0; i < n; i++) {
//     cin >> k;
//     v.push_back(k);
//   }

//   for(int i = 0; i < m; i++) {
//     cin >> k;
//     tempV.push_back(k);
//   }

//   for(int i = 0; i < n; i++) {
//     auto it = find(tempV.begin(), tempV.end(), v[i]);
//     if(it != tempV.end()) {
//       cnt++;
//     }
//   }

//   cout << cnt;
// }

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<string> v;

int main() {
  map<string, int> mp;
  int n, m, cnt = 0;
  string str;

  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    cin >> str;
    mp.insert({str, 1});
  }

  for(int i = 0; i < m; i++) {
    cin >> str;
    if(mp[str] == 1) {
      cnt++;
    }
  }

  cout << cnt;
}