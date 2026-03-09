#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
  int temp = 0;
  while(b != 0) {
    temp = b;
    b = a % b;
    a = temp;
  }

  return a;
}

int main() {
  int prevN = 0;
  int n, m, gcd_result = 0, result = 0;
  vector<int> v, cv;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> m;
    v.push_back(m);
  }

  sort(v.begin(), v.end());

  for(int i : v) {
    if(prevN != 0) {
      cv.push_back(i - prevN);
    }
    prevN = i;
  }

  for(int i = 0; i < cv.size(); i++) {
    gcd_result = gcd(gcd_result, cv[i]);
  }

  for(int i : cv) {
    result += i / gcd_result - 1;
  }

  cout << result;
}