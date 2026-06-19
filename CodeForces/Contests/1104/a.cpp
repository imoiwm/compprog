#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int mn = 1e9;
    int n; cin>>n;
    int res = 0;
    for (int i = 0; i < n; ++i) {
      int temp; cin>>temp;
      if (mn >= temp) {
        mn = temp;
      }
      res += mn;
    }
    cout << res << '\n';
  }
  return 0;
}
