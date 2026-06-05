#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t;cin>>t;
  while (t--) {
    ll n, k, x; cin>>n>>k>>x;
    ll lb = k * (k + 1) / 2;
    ll rb = k * (n + n - k + 1) / 2;
    if (x >= lb && x <= rb) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
