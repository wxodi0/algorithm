/*
<input>
2
3
hat headgear
sunglasses eyewear
turban headgear
mask face
3
mask face
sunglasses face
makeup face


하 경우의 수 으렵네
*/

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  int n, c = 0;
  string wear;
  string body;
  int result;
  

  cin >> c;
  for(int i = 0; i < c; i++) {
    result = 1;
    map<string, int> m;
    cin >> n;
  
    for(int i = 0; i < n; i++) {

      cin >> wear >> body;

      if(m.find(body) != m.end()) {
        m[body]++;
      } else {
        m[body] = 1;
      }
    }
    //각각의 총 개수를 구하여 곱해주기 
    for(auto iter = m.begin();iter != m.end(); iter++) {
      //예시로 a개의 옷을 입을때 a+1의 경우가 나온다. 그러므로 +1
      result *= (iter->second) + 1;
      //result에 곱해주는 이유는 총 경우의 수를 구해야 하기 때문.
    }
    cout << result - 1 << '\n';
  }

  return 0;
}
