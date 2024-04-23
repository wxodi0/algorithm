/*
예시

예제 입력 1 
3 4 6
1 1 1 1
1 1 1 1
1 1 1 1
예제 출력 1 
8

이렇게 된다. 

2*3 행렬에 6 => 6%6 == 0 7개 

3*4 행렬에 12 => 12%6 == 0 1개 

이렇게 총 8개가 되는 것 같다.

이때 부분 행렬을 봤을때 n*n 구역의 값들을 합 이라고 나타낼 수 있음

1*1 
1*2 
2*1
2*2
3*3
*/


// #include <iostream>
// using namespace std;

// int main() {
//   int n, m;
//   int a[10001][10001] = {0,};

//   int c;

//   cin >> n >> m >> c;

//   for(int i = 0; i < n; i++) {
//     for(int j = 0; j < m; j++) {
//       cin >> a[i][j];
//     }
//   }

//   for(int i = 0; i < n; i++) {
//     for(int j = 0; j < m; j++) {
      
//     }
//   }


// }

//모르겠어서 답 받음... 우선 제출하고 계속 풀어보겠습니다..


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MAXN = 1000000;

int cnt[MAXN];

int md(int K, int num) {
    return ((num % K) + K) % K;
}


int main() {
    int Y, X, K;
    cin >> Y >> X >> K;

    vector<vector<int>> b(Y, vector<int>(X));
    for (int i = 0; i < Y; ++i) {
        for (int j = 0; j < X; ++j) {
            cin >> b[i][j];
        }
    }

    int ans = 0;

    int FX = X;

    for (int cx = 0; cx < FX; cx++, X--) {
        vector<vector<int>> psum(Y + 1, vector<int>(X + 1));
        for (int y = 0; y < Y; y++) {
            for (int x = 0; x < X; x++) {
                psum[y + 1][x + 1] = md(K, b[y][x + cx] + psum[y + 1][x] + psum[y][x + 1] - psum[y][x]);
            }
        }

        int tmp = 0;
        for (int x = 0; x < X; x++) {
            vector<int> list;
            cnt[0] = 1;
            list.push_back(0);
            for (int y = 0; y < Y; y++) {
                int v = psum[y + 1][x + 1];

                tmp += cnt[v];

                cnt[v]++;
                list.push_back(v);
            }

            for (int v : list) cnt[v] = 0;
        }
        ans += tmp;
    }

    cout << ans;
    return 0;
}
