#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll a, b, x, y; cin>>a>>b>>x>>y;
    x = abs(x);
    y = abs(y);
    ll mn = min(x, y), abmn = min(a, b);
    x -= mn;
    y -= mn;
    ll res = mn * abmn * 2;
    int curr = max(x, y);
    ll option_a = (curr / 2) * a;
    option_a += (curr / 2) * b;
    if (curr % 2 == 1) {
      if (curr == x) {
        option_a += a;
      } else {
        option_a += b;
      }
    }
    ll option_b = (abmn * 2) * ((curr / 2) * 2);
    if (curr % 2 == 1) {
      if (curr == x) {
        option_b += min(a, 3 * b);
      } else {
        option_b += min(b, 3 * a);
      }
    }
    res += min(option_a, option_b);
    cout << res << '\n';
  }
  return 0;
}

