#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n;cin>>n;
  vector<int> arr(n+1);
  for (int i = 1; i <= n; ++i) {
    cin>>arr[i];
  }
  vector<int> memo (n+1, 1e9);
  memo[1] = 0;
  for (int i = 2; i <= n; ++i) {
    memo[i] = min(memo[i], memo[i - 1] + abs(arr[i] - arr[i - 1]));
    if (i > 2) {
      memo[i] = min(memo[i], memo[i - 2] + abs(arr[i] - arr[i - 2]));
    }
  }
  cout << memo[n] << '\n';
  return 0;
}

    
