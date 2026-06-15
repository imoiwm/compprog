#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, x; cin>>n>>x;
  vector<int> prices(n+1,0), pgs(n+1,0);
  vector<int> memo(x+1,0);
  for (int i = 1; i <= n; ++i) {
    cin>>prices[i];
  }
  for (int i = 1; i <= n; ++i) {
    cin>>pgs[i];
  }
  for (int i = 1; i <= n; ++i) {
    for (int j = x; j >= prices[i]; --j) {
      memo[j] = max(memo[j], memo[j - prices[i]] + pgs[i]);
    }
  }
  cout << memo[x] << '\n';
  return 0;
}
