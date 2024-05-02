#include <iostream>
using namespace std;

int num = 6;
int MAX = 100000000;

int a[6][6] = {
  {0, 2, 5, 1, MAX, MAX},
  {2, 0, 3, 2, MAX, MAX},
  {5, 3, 0, 3, 1, 5},
  {1, 2, 3, 0, 1, MAX},
  {MAX, MAX, 1, 1, 0, 2},
  {MAX, MAX, 5, MAX, 2, 0},
};

bool v[6]; //방문한 노드 체크
int line[6]; //비용

int getSallIndex() {
  int min = MAX;
  int index = 0;
  for(int i = 0; i < num; i++) {
    if(line[i] < min && !v[i]) { //방문하지 않은 노드의 낮은 비용체크
      min = line[i];
      index = i;
    }
  }
  return index;
}

void dijkstra(int start) {
  //비용확인
  for(int i = 0; i < num; i++) {
    line[i] = a[start][i];
  }
  //1. 첫 노드 방문 체크
  v[start] = true;

  //num - 2를 하는 이유: 첫번째와 마지막 노드를 제외를 생각해서 시간 단축
  for(int i = 0; i < num - 2; i++) { 
    int current = getSallIndex(); // 가장 비용이 저렴한 노드 추출
    v[current] = true; //노드 방문 체크
    for(int j = 0; j < 6; j++) {
      if(!v[j]) { //방문이 안된 노드 체크
        //t. a[current][j] = 선택한 노드에서 산정된 방문할 수 있는 노드의 비용
        //선택한 노드의 비용과 t의 합을 산정해 기존의 비용과 비교
        if(line[current] + a[current][j] < line[j]) {
          //비교후 낮은 비용의 값을 선정
          line[j] = line[current] + a[current][j];
        }
      }
    }
  }
}

int main() {
  dijkstra(0);
  for(int i = 0; i < num; i++) {
    cout << line[i];
  }
}