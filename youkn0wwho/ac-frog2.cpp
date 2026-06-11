#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n,k;cin>>n>>k;
  vector<int> arr(n+1);
  vector<int> memo(n+1,1e9);
  for (int i = 1; i <= n; ++i) {
    cin>>arr[i];
  }
  memo[1] = 0;
  for (int i = 2; i <= n; ++i) {
    for (int j = 1; j <= k; ++j) {
      if (i - j >= 1) {
        memo[i] = min(memo[i], memo[i - j] + abs(arr[i] - arr[i - j]));
      }
    }
  }
  cout << memo[n] << '\n';
  return 0;
}
