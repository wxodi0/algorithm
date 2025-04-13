#include <iostream>
using namespace std;
int main() {
  int h, m, exTime;
  int time;

  cin >> h >> m >> exTime;

  time = (h*60) + m + exTime;

  if(time >= 60 * 24) {
    time -= 60 * 24;
  }

  cout << time/60 << " " << time%60;
}
