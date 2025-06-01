<<<<<<< HEAD

  }
} 
=======
#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

<<<<<<< HEAD
  cout << (n * (n - 1))/2 << '\n' << 2; 
}
=======
    if(n == -1) {
      break;
    }

    m = n;

    for(int i = 1; i < n; i++) {
      if(n % i == 0) {
        dq.push_back(i);
        m -= i;
      }
    }

    if(m == 0) {
      cout << n << " = ";
      for(int i = 0; i < dq.size(); i++) {
        cout << dq[i];
        if(i != dq.size() - 1) {
          cout << " + ";
        }
      }
      
      cout << '\n';
    } else {
      cout << n << " is NOT perfect." << '\n';
    }

    dq.clear();
  }
}
>>>>>>> 58463df12ccf9211ae1dbd42204c8a79ab372107
>>>>>>> 0054922d8c671012b42050ff8901216b52f19632
