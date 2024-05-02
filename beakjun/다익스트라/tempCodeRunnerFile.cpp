#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int start;
int v, e;
//최소비용
int d[2001];
vector<pair<int, int>> vec[2001];

void input() {
  int U, V, W; //u 에서 v로 간선 가중치 = w
  scanf("%d %d %d", &v, &e, &start);
  for(int i = 0; i < e; i++) {
    scanf("%d %d %d", &U, &V, &W);
    //시작 노드에 따라 도착노드, 비용 저장
    vec[U].push_back(make_pair(V, W));
  }
  for(int i = 1; i <= v; i++) {
    d[i] = 11;
  }

  return ;
}

void dijkstra() {
  priority_queue<pair<int, int>> q;

  //시작노드 체크 및 삽입
  d[start] = 0;
  q.push(make_pair(0, start));

  while(!q.empty()) {
    int dist = -q.top().first;
    int current = q.top().second;

    //지나온 노드 삭제
    q.pop();

    if (d[current] < dist) continue;

    for(int i = 0; i < vec[current].size(); i++) {
      int next = vec[current][i].first;
      int next_dist = dist + vec[current][i].second;

      if (next_dist < d[next]) {
        d[next] = next_dist;
        q.push(make_pair(-d[next],next));
      }
    }
  }
}

void output() {
  for(int i = 1; i <= v; ++i) {
    if (d[i] == 11) printf("INF\n");
    else printf("%d\n", d[i]);
  }
}

void solve() {
  input();
  dijkstra();
  output();
}

int main() {
  ios::sync_with_stdio(false);

  solve();
}