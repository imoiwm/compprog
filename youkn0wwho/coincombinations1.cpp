#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll MOD = 1e9 + 7;
  ll n, x; cin>>n>>x;
  vector<ll> memo (x+1,0);
  vector<ll> arr(n);
  for (int i = 0; i < n; ++i) {
    cin>>arr[i];
  }
  for (auto val : arr) {
    if (val < memo.size()) {
      memo[val]++;
    }
  }
  for (int i = 1; i <= x; ++i) {
    for (auto val : arr) {
      if (i - val >= 0) {
        memo[i] += memo[i - val];
        memo[i] %= MOD;
      }
    }
  }
  cout << memo[x] << '\n';
  return 0;
}
