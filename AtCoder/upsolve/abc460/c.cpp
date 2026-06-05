#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, m; cin>>n>>m;
  vector<ll> rice(n), t(m);
  int res = 0;
  for (int i = 0; i < n; ++i) {
    cin>>rice[i];
  }
  for (int i = 0; i < m; ++i) {
    cin>>t[i];
  }
  sort(rice.begin(), rice.end());
  sort(t.begin(), t.end());
  int i = n - 1, j = m - 1;
  while (i >= 0 && j >= 0) {
    while (j >= 0 && ((t[j] + 1) / 2 > rice[i])) {
      j--;
    }
    if (j >= 0) {
      i--;
      j--;
      res++;
    }
  }
  cout << res << '\n';
  return 0;
}
