#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, q; cin>>n>>q;
    vector<ll unsigned> arr (n);
    vector<ll unsigned > ps (n);
    ll curr = 0;
    for (int i = 0; i < n; i++) {
      cin>>arr[i];
      ps[i] = curr + arr[i];
      curr += arr[i];
    }
    for (int i = 0; i < q; i++) {
      ll unsigned l, r, k; cin>>l>>r>>k;
      ll unsigned res = ps[n - 1] - ps[r - 1];
      if (l > 1) {
        res += ps[l - 2];
      }
      res += k * (r - l + 1);
      if (res % 2 == 1) {
        cout << "YES" << '\n';
      } else {
        cout << "NO" << '\n';
      }
    }
  }
  return 0;
}
    
