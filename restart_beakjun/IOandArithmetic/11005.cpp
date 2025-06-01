#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int m = 0, num = 0;
  int remain = 0;

  string result;

  cin >> num >> m;

  while(num > 0) {
    remain = num % m;
    if(remain >= 0 && remain <= 9) {
      result += (remain + '0');
    } else {
      result += ((remain - 10) + 'A');
    }
    num /= m;
  }

  for(int i = result.length() - 1; i >= 0; i--) {
    cout << result[i];
  }
}