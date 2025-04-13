#include <iostream>
using namespace std;

int main() {
  int xmin = 100000, xmax = -10000;
  int ymin = 100000, ymax = -10000;
  int n, x, y;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> x >> y;
    
    xmin = min(xmin, x);
    ymin = min(ymin, y);

    xmax = max(xmax, x);
    ymax = max(ymax, y);
  }

  cout << (xmax - xmin) * (ymax - ymin);
}