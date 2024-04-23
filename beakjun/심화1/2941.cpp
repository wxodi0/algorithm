// #include <iostream>
// #include <string.h>
// char n[10000];
// int cnt = 0;
// int main() {
//   scanf("%s",n);
//   for(int i = 0 ; i < strlen(n); i++) {
//     if(n[i] == '=') {
//       if(n[i - 1] == 'c' || n[i - 1] == 's' || n[i - 1] == 'z' ){
//         cnt += 2;
//       }else if(n[i - 1] == 'z' && n[i - 2] == 'd'){
//         cnt += 2;
//       }
//     }
//     if(n[i] == '-') {
//       if(n[i - 1] == 'c' || n[i - 1] == 'd') {
//         cnt += 2;
//       }
//     }
//     if(n[i] == 'j') {
//       if(n[i - 1] == 'l' || n[i - 1] == 'n') {
//         cnt += 2;
//       }
//     }
//   }

//   printf("%d",cnt);
// }

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int idx;
    string str;
    cin >> str;
    for(int i = 0; i < croatian.size(); i++)
    {
        while(1){
            idx = str.find(croatian[i]);
            if(idx == string::npos) //문자열을 찾지 못했을때.
                break;
            str.replace(idx,croatian[i].length(),"&");
        }
    }
    cout << str.length();
}