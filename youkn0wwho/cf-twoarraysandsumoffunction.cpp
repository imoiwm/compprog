#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll unsigned calc(ll unsigned val) {
  return 1LLU * (val * (val + 1) / 2);
}

int main() {
  ll unsigned n; cin>>n;
  vector<ll unsigned> a (n);
  ll unsigned MOD = 998244353;
  vector<ll unsigned> b(n);
  for (int i = 0; i < n; ++i) {
    cin>>a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin>>b[i];
  }
  sort(b.rbegin(), b.rend());
  ll unsigned x = (n + 1) / 2, y = n / 2;
  for (size_t i = 0; i <= ((n - 1) / 2); ++i) {
    ll unsigned val = calc(x);
    val -= calc(x - i - 1);
    val += calc(y);
    val -= calc(y - i - 1);
    a[i] *= val;
    if (i != n - i - 1) {
      a[n - i - 1] *= val;
    }
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n; ++i) {
    a[i] %= MOD;
  }
  ll unsigned res = 0;
  for (int i = 0; i < n; ++i) {
    res += 1LLU * a[i] * b[i];
    res %= MOD;
  }
  cout << res << '\n';
  return 0;
}



