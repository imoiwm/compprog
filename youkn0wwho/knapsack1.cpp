#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, w; cin>>n>>w;
  vector<pair<ll, ll>> arr;
  for (int i = 0; i < n; ++i) {
    ll w, v; cin>>w>>v;
    arr.push_back(make_pair(w, v));
  }
  vector<ll> dp (w+1);
  for (auto p : arr) {
    for (int i = w; i >= p.first; --i) {
      dp[i] = max(dp[i], dp[i - p.first] + p.second);
    }
  }
  cout << dp[w];
  return 0;
}
    
