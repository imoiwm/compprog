#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, m; cin>>n>>m;
  string s, t; cin>>s>>t;
  vector<int> res(n - m + 1, 0);
  for (int i = 0; i < m; ++i) {
    for (int j = i; j < n - m + i + 1; ++j) {
      if (s[j] - t[i] < 0) {
        res[j - i] += s[j] - t[i] + 10;
      } else {
        res[j - i] += s[j] - t[i];
      }
    }
  }
  cout << *min_element(res.begin(), res.end()) << '\n';
  return 0;
}

