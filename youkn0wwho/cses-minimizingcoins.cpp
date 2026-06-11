#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, x; cin>>n>>x;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin>>arr[i];
  }
  vector<int> memo(x+1,1e9);
  for (auto val : arr) {
    if (val < memo.size()) {
      memo[val] = 1;
    }
  }
  for (int i = 1; i <= x; ++i) {
    for (auto val : arr) {
      if (i - val >= 1 && memo[i - val] != 1e9) {
        memo[i] = min(memo[i], memo[i - val] + 1);
      }
    }
  }
  if (memo[x] == 1e9) {
    cout << -1 << '\n';
  } else {
    cout << memo[x] << '\n';
  }
  return 0;
}

