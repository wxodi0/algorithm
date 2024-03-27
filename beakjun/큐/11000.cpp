#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;

    pair<int, int> tasks[n];
    for (int i = 0; i < n; ++i) {
        int start, end;
        cin >> start >> end;
        tasks[i] = {start, end};
    }

    sort(tasks, tasks + n);

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(tasks[0].second);

    for (int i = 1; i < n; ++i) {
        if (pq.top() <= tasks[i].first) pq.pop();
        pq.push(tasks[i].second);
    }

    cout << pq.size() << endl;

    return 0;
}