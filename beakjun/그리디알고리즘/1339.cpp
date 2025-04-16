#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;

int index[26];

bool compare(pair<int, string> a, pair<int, string> b) {

	return a.first > b.first;
}

bool compare1(int &a, int &b) {
	return a > b;
}

int main() {
  string enNumber;
  string enIdx;
  int num = 0;
  int n;
  
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> enNumber;
    v.push_back(enNumber);
  }

  auto it = v.begin();

  int i = 0;

  while(it != v.end()) {
    enIdx = *it;

    num = 1;
    for(int i = it -> length() - 1; i >= 0; i--) {
      index[enIdx[i] - 'A'] += num;
      num *= 10;
    }
    i++;
    it++;
  }

  sort(index, index + 26, compare1);

  int allNum = 0;
  int cntNum = 9;

  for (int i = 0; i < 26;i++) {
		if(cntNum == 0) {
      break;
    }
		allNum += index[i] * cntNum--; 
	}

  cout << allNum;

  return 0;
}

/*
const auto&:
  const: 불변
  auto&: 원본 데이터를 참조합니다. 복사본을 만들지 않고 직접 원본을 사용하므로 메모리 사용을 절약하고 성능을 향상시킵니다.

auto:
  단순히 auto를 사용하면 데이터가 복사됩니다. 큰 데이터 구조에서는 메모리와 성능 면에서 비효율적일 수 있습니다.
*/