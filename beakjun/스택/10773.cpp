/*
제로

잘못된 수를 부를때 0을 외침.

즉 수를 입력받고 0이 있을떄마다 pop

*/


#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> st;
  int n, m;
  int num = 0;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> m;
 
    if(m == 0) {
      st.pop();
    }else {
      st.push(m);
    }
  }

  while(!st.empty()) {
    num += st.top();
    st.pop();
  }

  cout << num;
}