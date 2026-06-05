#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<ll unsigned> a (n), b (n);
    for (int i = 0; i < n; ++i) {
      cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
      cin>>b[i];
    }
    ll unsigned res = 0;
    ll unsigned to_add = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i] > b[i]) {
        res += a[i];
        to_add = max(to_add, b[i]);
      } else {
        res += b[i];
        to_add = max(to_add, a[i]);
      }
    }
    res += to_add;
    cout << res << '\n';
  }
  return 0;
}
