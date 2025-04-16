#include <iostream>
#include <vector>

using namespace std;

// 주어진 행(row), 왼쪽 끝(left), 오른쪽 끝(right)에 대해 트리를 그리는 함수
void draw_tree(int row, int left, int right, vector<string>& lines) {
    if (row < 0) return; // 가장 아래 행에 도달하면 종료

    int mid = (left + right) / 2; // 현재 행의 가운데 위치 계산
    lines[row][mid] = 'X'; // 가운데 위치에 'X' 배치

    // 왼쪽과 오른쪽 부분 트리에 대해 재귀 호출
    draw_tree(row - 1, left, mid, lines);
    draw_tree(row - 1, mid + 1, right, lines);
}

int main() {
    int rows = 5; // 트리의 높이
    int width = (1 << rows) - 1; // 트리 출력의 넓이, 2^rows - 1

    // 각 행을 저장할 문자열 벡터 초기화
    vector<string> lines(rows, string(width, ' '));

    // 트리 출력
    draw_tree(rows - 1, 0, width - 1, lines);

    // 결과 출력
    for (const auto& line : lines) {
        cout << line << endl;
    }

    return 0;
}
