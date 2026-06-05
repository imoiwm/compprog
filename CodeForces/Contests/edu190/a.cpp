#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll n, a, b; cin>>n>>a>>b;
    double eff = b / 3.0, af = (double)a;
    //cout << eff << ' ' << af << '\n';
    if (eff < af) {
      ll res = b * (n / 3);
      //cout << res << '\n';
      n %= 3;
      //cout << n << '\n';
      if (n != 0) {
        res += min(a * n, b);
        //cout << a * n << ' ' << b << '\n';
      }
      cout << res << '\n';
    } else {
      cout << a * n << '\n';
    }
  }
  return 0;
}

    
