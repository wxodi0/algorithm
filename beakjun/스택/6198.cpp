/*
            = 
 =           = 
 =     -     = 
 =     =     =        -> 관리인이 보는 방향
 =  -  =  =  =   
 =  =  =  =  =  = 
10  3  7  4  12 2     -> 빌딩의 높이
[1][2][3][4][5][6]    -> 빌딩의 번호

이런 문제이다. 

1번에 있을때는 10보다 낮은게 3개니 -> 3
2번은 막혀서 -> 0
3번은 4층짜리를 볼 수 있어서 -> 1
4번도 막혀서 -> 0
5번은 1개 볼 수 있어서 -> 1
6번은 마지막이여서 -> 0

즉 계속 추가되는 수가 작으면 계속 값을 더해나가면 되는 것 같다.

1. 아파트 개수
2. 처음 기준이 되는 층
3. 10층을 넣었으면 10보다 같거나 작은 층은 지움.
4. 순회하면서 삭제하고 남은 1을 카운트.
5. 그리고 삭제된 요소를 다시 돌린다
*/
#include <iostream> 
#include <stack>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  stack<int> st;
  int n, hg;
  long result = 0;

  cin >> n;

  for(int i = 0; i < n; i++) {

    cin >> hg;

    if(st.empty()) {
      st.push(hg);
      continue;
    }
    
    while(!st.empty() && st.top() <= hg) {
      st.pop();
    }

    result += st.size(); 
    st.push(hg);
  }

  cout << result;
  return 0;
}