#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

vector<string> nameV;
map<string, int> info;

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0);
  
  int n, m;
  string name, str;

  cin >> n >> m;

  for(int i = 1; i <= n; i++) {
    cin >> name;
    nameV.push_back(name);
    info.insert({name, i});
  }

  for(int i = 0; i < m; i++) {
    cin >> str;
    if(atoi(str.c_str()) != 0) {
      cout << nameV[atoi(str.c_str()) - 1] << '\n';
    } else {
      cout << info[str] << '\n';
    }
  }
}