#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
  int cnt[200];
  string a;

  cin >> a;

  memset(cnt, -1, sizeof(cnt));

  for(int i = 0; i < a.length(); i++) {
    if(cnt[(int)a[i]] == -1) {
      cnt[(int)a[i]] = i;
    }
  }

  for(int i = 97; i < 123; i++) {
    cout << cnt[i] << ' ';
  }
}