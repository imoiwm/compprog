#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll MOD = 1e9 + 7;
  int n; cin>>n;
  vector<ll> prev(n, 0), curr(n, 0);
  prev[0] = 1;
  for (int i = 0; i < n; ++i) {
    string row; cin>>row;
    for (int j = 0; j < n; ++j) {
      if (row[j] == '.') {
        if (j > 0) {
          curr[j] += curr[j - 1];
          curr[j] %= MOD;
        }
        curr[j] += prev[j];
        curr[j] %= MOD;
      } else {
        curr[j] = 0;
      }
    }
    prev = curr;
    curr = vector<ll>(n, 0);
  }
  cout << prev[n-1] << '\n';
  return 0;
}
