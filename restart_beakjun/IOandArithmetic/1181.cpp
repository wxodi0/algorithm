#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string str[20000];

int cmp(string a, string b) {
  if(a.length() == b.length()) {
    return a < b;
  } else {
    return a.length() < b.length();
  }
}


int main() {
  int n;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> str[i];
  }

  sort(str, str + n, cmp);

  for(int i = 0; i < n; i++) {
    if(str[i - 1] == str[i]) continue;
    cout << str[i] << '\n';
  }
}