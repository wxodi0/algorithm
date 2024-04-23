// #include <iostream>
// #include <string>
// #include <map>
// using namespace std;

// int main() {
//   map<string, string> m, p;
//   int n;

//   string name, state;

//   cin >> n;

//   for(int i = 0; i < n; i++) {
//     cin >> name >> state; //이름과 상태를 받음

//     m[name] = state; //map에 key와 value로 지정
//   }

//   for(auto i: m) {
//     if(i.second == "enter") { //map을 순회하며 enter 인 것을 확인 후 p map에 삽입.
//       p[i.first] = i.second;
//     }
//   }

//   for(auto it = p.rbegin(); it != p.rend(); ++it) { //p map을 역순으로 출력
//     cout << it ->first << "\n";
//   }

//   return 0;
// } 
// 어케든 정렬은 했지만 시간초과.

//greater 라는 정렬 방법을 찾았다. 적용시켜보자.
//아니 왜ㅐㅐㅐㅐㅐㅐㅐㅐㅐ 이것도 시간초과? 구글에서 참고해보자...ㅋ

#include <iostream>
#include <map>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  map<string, string, greater<>> m, p;
  int n;

  string name, state;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> name >> state; //이름과 상태를 받음

    m[name] = state; //map에 key와 value로 지정
  }

  map<string, string>::iterator it;
  for(it = m.begin(); it!=m.end(); it++) { //map을 역순으로 순회하며 value가 enter인 요소를 출력
    if(it->second == "enter") {
      cout << it->first << '\n';
    }
  }

  return 0;
}


//이것도 시간초과

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//   cin.tie(NULL);
//   ios_base::sync_with_stdio(false);

//   map<string, string, greater<>> m;
//   string name, state;
  
//   int n;

//   cin >> n;

//   for(int i = 0; i < n; i++) {
//     cin >> name >> state;

//     m[name] = state;
//   }

//   map<string, string>::iterator it;
//   for(it = m.begin(); it!=m.end(); it++) {
//     if(it->second == "enter") {
//       cout << it->first << "\n";
//     }
//   }

//   return 0;
// }

//???????????????????? endl 바꾸니까 된다... endl 안쓸게요..

//https://stackoverflow.com/questions/213907/stdendl-vs-n