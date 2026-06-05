#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t;cin>>t;
  while (t--) {
    int n;cin>>n;
    int ones = 0; int res = 0; int twos = 0;
    for (int i = 0; i < n; ++i) {
      int temp; cin>>temp;
      if (temp == 0) {
        res++;
      } else if (temp == 1) {
        ones++;
      } else {
        twos++;
      }
    }
    if (twos > ones) {
      res += ones;
      twos -= ones;
      res += (twos / 3);
    } else if (twos < ones) {
      res += twos;
      ones -= twos;
      res += (ones / 3);
    } else {
      res += ones;
    }
    cout << res << '\n';
  }
  return 0;
}

