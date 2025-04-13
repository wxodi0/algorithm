// #include <iostream>
// using namespace std;

// int main() {
//   int min = 1000;
//   int x, y, w, h;

//   cin >> x >> y >> w >> h;

//   if(min > w - x) {
//     min = w - x;
//   }

//   if(min > h - y) {
//     min = h - y;
//   }

//   if(min > x) {
//     min = x;
//   }

//   if(min > y) {
//     min = y;
//   }

//   cout << min;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y, w, h;
    int min1, min2;
    cin >> x >> y >> w >> h;
    min1 = min(x, y);
    min2 = min(w-x, h-y);
    cout << min(min1, min2);
}