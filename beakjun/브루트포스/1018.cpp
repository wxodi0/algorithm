/*
처음에 8*8이라는 조건을 못보아서 예제가 어떻게 저렇게 나오지 싶었다...ㅋ

그럼 8*8이 정해져 있는거면 8*8필드를 정해놓고 비교하면서 다른 부분을 cnt 하는게 좋을 것 같다.

문제는 순회를 거ㅓㅓㅓㅓㅓㅓ업나 많이 해서 가장 낮은 값을 찾아야한다,,


음 짜보자.

아 wbwb랑 bwbw를 간과 했다.

두개의 배열을 만들어주자.

ㅁㄴ아러ㅓㅠㅁㄷ쥬라ㅜㅁ럼이ㅏ룸얼 아ㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏ 몰랑

*/


#include <iostream>
#include <algorithm>

using namespace std;


char WB[8][8] = {
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W'
	};
	char BW[8][8] = {
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B'
	};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
  cout.tie(0);

	int n, m;
	int result;
	int res = 64; 
	char str[50][50];


	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> str[i][j];
		}
	}

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {

			int cnt_w = 0, cnt_b = 0;

			for (int x = 0; x < 8; x++) {
				for (int y = 0; y < 8; y++) {
					if (str[i + x][j + y] != BW[x][y]) {
						cnt_b++;
					} 
					if (str[i + x][j + y] != WB[x][y]) {
						cnt_w++;
					}
				}
			}

			result = min(cnt_b, cnt_w);
      
			if (result <= res) {
				res = result;
			}
		}
	}
	cout << res;
}