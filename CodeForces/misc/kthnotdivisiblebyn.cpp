#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll n, k;cin>>n>>k;
    ll toadd = k / (n - 1);
    if (k % (n - 1) == 0) {
      toadd--;
    }
    cout << k + toadd << '\n';
  }
  return 0;
}
