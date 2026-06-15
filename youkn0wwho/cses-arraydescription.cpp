#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, m; cin>>n>>m;
  vector<int> arr(n);
  vector<vector<int>> memo(n+1, vector<int>(n+1, 0));
  for (int i = 0; i <= n; ++i) {
    memo[0][i]++;
  }
  for (int i = 1; i <= n; ++i) {
    memo[i][i]++;
  }
  for (int i = 0; i < n; ++i) {
    cin>>arr[i];
  }
  ll res = 0;
  int MOD = 1e9+7;
  int curr = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == 0) {
      curr++;
    } else {



    

