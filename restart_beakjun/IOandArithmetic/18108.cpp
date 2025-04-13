#include <iostream>
using namespace std;

int main() {
  int a;

  cin >> a;

  //불기년도 - 544 = 서기년도
  //하지만 일부 태국과 같은 국가에서는 서기에서 543년을 더하면 불기 년도가 됨.
  cout << a - 543;
}