#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  map<string, int> mp;
  string str, temp;
  int cnt = 0;

  cin >> str;

  for(int i = 0; i < str.length(); i++) {
    temp = "";
    for(int j = i; j < str.length(); j++) {
      temp += str[j];
      mp[temp] = 1;
    }
  }

  for(const auto& map : mp) {
    if(map.second == 1) {
      cnt++;
    }
  }

  cout << cnt;
}