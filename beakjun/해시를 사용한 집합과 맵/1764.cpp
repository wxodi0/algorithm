#include <iostream>
#include <map>
using namespace std;

map<string, int> m;

int main() {
  int n, n2;
  int cnt = 0;
  string str;

  cin >> n >> n2;

  for(int i = 0 ; i < n + n2; i++) {
    cin >> str;
    m[str] += 1;
  }

  for(auto iter : m) {
    if(iter.second == 2) {
      cnt++;
    }
  }
}