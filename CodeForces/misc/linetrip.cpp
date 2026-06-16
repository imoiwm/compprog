#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, x;
    int prev = 0;
    int res = -1;
    cin>>n>>x;
    for (int i = 0; i < n; ++i) {
      int temp; cin>>temp;
      if (i == n - 1) {
        res = max(res, 2 * (x - temp));
      }
      res = max(res, abs(temp - prev));
      prev = temp;
    }
    cout << res << '\n';
  }
  return 0;
}
