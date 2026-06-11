#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll MOD = 1e9 + 7;
  ll n; cin>>n;
  vector<ll> memo (n + 1, 0);
  for (int i = 1; i <= 6; ++i) {
    memo[i]++;
  }
  for (int i = 2; i <= n; ++i) {
    for (int j = max(0, i - 6); j < i; ++j) {
      memo[i] += memo[j];
      memo[i] %= MOD;
    }
  }
  cout << memo[n] << '\n';
  return 0;
}

