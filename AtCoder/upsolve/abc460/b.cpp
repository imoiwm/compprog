#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll x1, y1, r1, x2, y2, r2; cin>>x1>>y1>>r1>>x2>>y2>>r2;
    ll dx = abs(x1 - x2);
    ll dy = abs(y1 - y2);
    ll dr = r1 + r2;
    ll distsq = (1ULL * dx * dx) + (1ULL * dy * dy);
    long double dist = sqrtl(distsq);
    if (dist <= dr) {
      if (dist + 1.0 * min(r1, r2) >= 1.0 * max(r1, r2)) {
        cout << "Yes" << '\n';
      } else {
        cout << "No" << '\n';
      }
    } else {
      cout << "No" << '\n';
    }
  }
  return 0;
}
