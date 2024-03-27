#include <iostream>
using namespace std;

int allMember (int f,int d) {
  if(f == 0) {
    return d;
  }
  if(d == 1) {
    return 1;
  }
  return allMember(f-1, d) + allMember(f, d-1);
}

int main() {
  int n;
  int f, d;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> f >> d;
    cout << allMember(f, d) << endl;
  }
}

/*
2개의 횟수

2층 1 2 3 -> 10
------------
1층 1 2 3 -> 6     -> 1: 1 3 9
------------
0층 1 2 3

만약 3개라면?
3층 1 2 3 -> 15   
------------
2층 1 2 3 -> 10    -> 2: 1 4 10
------------
1층 1 2 3 -> 6     -> 1: 1 3 9
------------
0층 1 2 3

2
1
3
2
3

입력시 
6
10
*/