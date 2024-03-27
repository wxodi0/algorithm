//1트.. 안된다 출력은 잘 이루어 지지만 7%쯤에서 막힌다.

//문자열 마지막 입력이 루프를 계속 도는 것 때문인지 모르겠다.

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main() {
//   string a, b;
//   string result;
//   int maxLength = 0;

//   while(cin >> a >> b) {

//     if(a.empty() || b.empty()) {
//       break;
//     }

//     for(int i = 0; i < a.length(); i++) {
//       for(int j = 0; j < b.length(); j++) {
//         if(a.at(i) == b.at(j)) {
//           if(result.find(a.at(i)) == string::npos) {
//             result.push_back(a.at(i));
//           }
//         }
//       }
//     }

//     sort(result.begin(), result.end());

//     cout << result << endl;

//     result.clear();
//   }

//   return 0;
// }

//2트 함수를 적극 활용해보자.

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main() {
//   string a, b;
//   string result;
//   int maxLength = 0;

//   while(1) {

//     getline(cin, a);
//     getline(cin, b);

//     if(a.empty() || b.empty()) {
//       break;
//     }

//     for(char i : a) {
//       //a가 b에 있는지 없는지 확인 및 끝났는지 확인.
//       if (find(b.begin(), b.end(), i) != b.end()) {

//         //출력 문자 입력
//         result.push_back(i);
        
//         b.erase(remove(b.begin(), b.end(), i), b.end());
//       }

//       sort(result.begin(), result.end());
//     }

//     cout << result << endl;
//     result.clear();
//   }

//   return 0;
// }

//허허 왜 이걸까나

#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main() {
   string a, b;
   
   while (getline(cin,a),getline(cin,b)) {
      
      int alphabet1[26] = { 0 };
      int alphabet2[26] = { 0 };
      for (int i = 0; a[i]; i++) alphabet1[a[i] - 'a']++;
      for (int i = 0; b[i]; i++) alphabet2[b[i] - 'a']++;
      for (int i = 0; i < 26; i++) {
         int count = min(alphabet1[i], alphabet2[i]);
         for (int j = 0; j < count; j++) cout << (char)(i + 'a');
      }
      cout << endl;
   }
   return 0;
}