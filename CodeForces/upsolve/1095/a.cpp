#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<int> arr (n);
    long long res = 0;
    long long MOD = 676767677;
    for (int i = 0; i < n; ++i) {
      cin>>arr[i];
    }
    int ones = 0;
    for (auto val : arr) {
      if (val == 1) {
        ones++;
      } else {
        if (ones) {
          ones = 0;
        }
        res += val;
      }
    }
    if (ones) {
      res++;
    }
    cout << res << '\n';
  }
  return 0;
}

