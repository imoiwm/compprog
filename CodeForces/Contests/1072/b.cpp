#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll s, k, m; cin>>s>>k>>m;
    int l = s, r = k;

    if (k >= s) {
      r = s;
    }
    int res = m % k;
    int f = m / k;
    if (f % 2 == 0) {
      cout << max(0, l - res) << '\n';
    } else {
      cout << max(0, r - res) << '\n';
    }
  }
  return 0;
}
