#include <iostream>

using namespace std;

int arr[100010];

int main() {
    int n, s;
    int l = 0, sum = 0;

    cin >> n >> s;

    int result = 100001;

    for(int r=0; r<n; ++r) {
      cin >> arr[r];

      sum += arr[r];
      while(sum >= s) {
        result = min(result, (r - l) + 1);
        sum -= arr[l];
        l++;
      }
    }
    
    if(result == 100001) {
      cout << 0;
    } else {
      cout << result;
    }
    
    return 0;
}