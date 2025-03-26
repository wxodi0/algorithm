#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); //c/c++ 컴파일러 동기화 취소
  cin.tie(NULL); //입출력 묶음 해제
  int n;
  int a, b;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> a >> b;
    cout << a + b << '\n';
  }
}
