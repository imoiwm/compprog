#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll unsigned a, b, k; cin>>a>>b>>k;
    if (a <= k && b <= k) {
      cout << 1 << '\n';
    } else {
      ll unsigned hcf = gcd(a, b);
      if (hcf == 1) {
        cout << 2 << '\n';
      } else {
        ll unsigned comp = a;
        comp /= hcf;
        ll unsigned compp = b;
        compp /= hcf;
        if (max(compp, comp) <= k) {
          cout << 1 << '\n';
        } else {
          cout << 2 << '\n';
        }
      }
    }
  }
  return 0;
}


