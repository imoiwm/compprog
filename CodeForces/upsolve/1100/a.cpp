#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    int mn = 1001, mx = 0;
    for (int i = 0; i < n; ++i) {
      int temp; cin>>temp;
      mn = min(mn, temp);
      mx = max(mx, temp);
    }
    int middle = (mn + mx) / 2;
    cout << max(middle - mn, mx - middle) << '\n';
  }
  return 0;
}

