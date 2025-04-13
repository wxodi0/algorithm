#include <iostream>
using namespace std;

int main() {
  int h, m;
  int time;

  cin >> h >> m;

  time = (h*60) + m - 45;

  if(time < 0) {
    time += 24 * 60;
  }
  
  cout << time/60 << " " << time%60;
}