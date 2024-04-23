/*

그냥 구조를 보니 map을 써서 출력하면 편할 것 같아 map을 사용하였다.
*/

/*
//cin, cout 으로 하니 시간초과가 뜸.
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  map<string, string> m;
  int n, nm;

  string url, pw, findUrl;

  cin >> n >> nm;

  for(int i = 0; i < n; i++) {
    cin >> url >> pw;
    m[url] = pw;
  }

  for(int i = 0; i < nm; i++) {
    cin >> findUrl;

    cout << m[findUrl] << endl;
  }
}
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  map<string, string> m;
  int n, nm;

  string url, pw, findUrl;

  scanf("%d %d", &n, &nm);

  for(int i = 0; i < n; i++) {
    cin >> url >> pw;
    m[url] = pw;
  }

  for(int i = 0; i < nm; i++) {
    cin >> findUrl;
    printf("%s\n", m[findUrl].c_str());
  }

  return 0;
}

//이렇게 제출하니 아슬아슬하게 됨.
