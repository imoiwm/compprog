#include <bits/stdc++.h>

using namespace std;

#define ll long long

int comb(int i, int j) {
  if (j == 0) {
    return 1;
  }
  if (j > i) {
    return 0;
  }
  return comb(i - 1, j - 1) + comb(i - 1, j);
}

int main() {
  int t; cin>>t;
  vector<vector<ll>> comb (31, vector<ll>(31));
  for (int i = 0; i <= 30; ++i) {
    comb[i][0] = 1;
  }
  for (int i = 1; i <= 30; ++i) {
    comb[0][i] = 0;
  }
  for (int i = 1; i <= 30; ++i) {
    for (int j = 1; j <= 30; ++j) {
      comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
    }
  }
  while (t--) {
    int n, k; cin>>n>>k;
    int d = 0, temp = n;
    while (temp > 1) {
      d++;
      temp >>= 1;
    }
    int res = 0;
    if (d + 1 > k) {
      res++;
    }
    for (int i = 0; i < d; ++i) {
      for (int j = 1; j <= i + 1; ++j) {
        if (i + j > k) {
          res += comb[i][j - 1];
        }
      }
    }
    cout << res << '\n';
  }
  return 0;
}
