#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  int n;
  int num = 0;
  string str;
  int cnt = 0;
  map<string, int> m;
  
  cin >> n;
  for(int i = 0; i < n;i++) {
    cin >> str >> num;

    m[str] += num;
  }
  for (auto iter : m)  {
    if(iter.second == 5) {
      cnt++;
      break;
    }
  }
  if(cnt == 0) {
    cout << "NO";
  }
  if(cnt == 1) {
    cout << "YES";
  }

  return 0;

  
}