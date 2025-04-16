// #include <iostream>
// using namespace std;

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(0);

//   double num[2] = {0,};
//   double a, b, v, day = 1;

//   cin >> a >> b >> v;

//   num[0] = a;
//   num[1] =  -b;

//   while(1) {
//     for(int i = 0; i < 2; i++) {
//       v -= num[i];
//       if(v <= 0) {
//         break;
//       }
//     }

//     if(v <= 0) {
//       break;
//     }

//     day++;
//   }
  
//   cout << day;
// }


#include <iostream>
using namespace std;

int main() {
  int a, b, v;
  int num = 0, day = 1;

  cin >> a >> b >> v;

  day += (v - a)/(a - b);

  if((v - a)%(a - b) != 0) {
    day++;
  }

  cout << day;
}