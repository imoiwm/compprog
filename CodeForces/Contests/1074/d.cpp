#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll n, m, h; cin>>n>>m>>h;
    vector<ll> arr (n);
    vector<ll> orig (n);
    vector<ll> lt (n);
    int rst = -1;
    for (int i = 0; i < n; ++i) {
      cin>>arr[i];
      orig[i] = arr[i];
      lt[i] = 0;
    }
    for (int i = 0; i < m; ++i) {
      ll b, c; cin>>b>>c;
      b--;
      if (lt[b] <= rst) {
        arr[b] = orig[b] + c;
      } else {
        arr[b] += c;
      }
      if (arr[b] > h) {
        arr[b] = orig[b];
        rst = i;
      }
      lt[b] = i;
    }
    for (int i = 0; i < n; ++i) {
      if (lt[i] <= rst) {
        arr[i] = orig[i];
      }
    }
    for (ll val : arr) {
      cout << val << ' ';
    }
    cout << '\n';
  }
  return 0;
}
