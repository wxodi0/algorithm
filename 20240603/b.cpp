#include <iostream>
using namespace std;

int main() {
  int h, h1, m;

  h = 60 * 8;

  cin >> h1 >> m;

  h += h1;

  cout << (h/60) << "시 " << (h%60) << "분" << endl;

  if(h + m >= (60 * 8) + 30) {
    cout << "교실 도착 시간은 " << ((h+m)/60) << "시 "<< ((h+m)%60) << "분으로 지각입니다.";
  }
}